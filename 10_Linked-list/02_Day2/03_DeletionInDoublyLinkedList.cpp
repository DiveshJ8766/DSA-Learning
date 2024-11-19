#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *previous;
    Node *next;

    Node()
    {
        this->data = 0;
        this->previous = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    }
};

void printDoublyLinkedList(Node *&head)
{
    Node *temp = head;
    cout << "Elements of Linked list : " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int getLengthOfLinkedList(Node *&head)
{
    int length = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertionAtHead(Node *&head, Node *&tail, int data)
{
    //* step 1: Create Empty Node
    Node *newNode = new Node(data);

    //* step 2: Check head is NULL Or Not
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    //* step 3: Head is Not NULL
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

void insertionAtEnd(Node *&head, Node *&tail, int data)
{
    //* step 1 : Create a Empty Node
    Node *newNode = new Node(data);

    //* step 2 : Check tail is Null or Not
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    //* step 3 : tail is not NULL
    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

void insertionAtPosition(Node *&head, Node *&tail, int position, int data)
{
    //* Position Check
    if (position < 1)
    {
        cout << "Invalid position. Position must be >= 1." << endl;
        return;
    }

    int length = getLengthOfLinkedList(head);
    if (position > length + 1)
    {
        cout << "Position out of range. Valid range is 1 to " << length + 1 << "." << endl;
        return;
    }

    //* position is head
    if (position == 1)
    {
        insertionAtHead(head, tail, data);
        return;
    }

    //* position is tail
    if (position == length + 1)
    {
        insertionAtEnd(head, tail, data);
        return;
    }

    //* Create new Node
    Node *newNode = new Node(data);

    //* position to insert at middle
    Node *temp = head;

    //* reach to that position
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    //* linking and delinking Nodes
    newNode->next = temp->next;
    temp->next->previous = newNode;
    temp->next = newNode;
    newNode->previous = temp;
}

void deletionOfNode(Node *&head, Node *&tail, int position)
{
    int lengthOfLinkedList = getLengthOfLinkedList(head);

    if (position < 1 || position > lengthOfLinkedList)
    {
        cout << "Invalid position. Deletion not possible." << endl;
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        if (lengthOfLinkedList == 1)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            head->previous = NULL;
        }

        delete temp;
        return;
    }

    if (position == lengthOfLinkedList)
    {
        Node *temp = tail;
        tail = tail->previous;
        tail->next = NULL;

        delete temp;
        return;
    }

    //* Create a Node
    Node *temp = head;

    //* Loop till the position
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }

    //* Linking and delinking the nodes
    temp->previous->next = temp->next;
    temp->next->previous = temp->previous;

    delete temp;
}

void deleteLinkedList(Node *&head, Node *&tail)
{
    Node *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    tail = NULL;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    Node *first = new Node(23);
    Node *second = new Node(56);
    Node *third = new Node(80);
    Node *fourth = new Node(63);

    first->previous = NULL;
    first->next = second;

    second->previous = first;
    second->next = third;

    third->previous = second;
    third->next = fourth;

    fourth->previous = third;
    fourth->next = NULL;

    head = first;
    tail = fourth;

    insertionAtHead(head, tail, 76);
    insertionAtHead(head, tail, 87);
    insertionAtEnd(head, tail, 90);
    insertionAtEnd(head, tail, 123);
    insertionAtHead(head, tail, 234);
    insertionAtHead(head, tail, 345);
    insertionAtEnd(head, tail, 390);
    insertionAtPosition(head, tail, 1, 54);
    insertionAtPosition(head, tail, 12, 100);
    insertionAtPosition(head, tail, 12, 99);
    printDoublyLinkedList(head);
    cout << "Length of Linked List : " << getLengthOfLinkedList(head) << endl;

    deletionOfNode(head, tail, 13);

    printDoublyLinkedList(head);
    cout << "Length of Linked List : " << getLengthOfLinkedList(head) << endl;

    deleteLinkedList(head, tail);
    cout << "Linked list deleted." << endl;

    return 0;
}