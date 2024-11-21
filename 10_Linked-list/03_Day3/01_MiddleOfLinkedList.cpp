#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Deleting the Node with data : " << this->data << endl;
    }
};

//* Print LinkedList
void printLinkedList(Node *&head)
{
    cout << "Elements of Linked List : " << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

//* Length Of LinkedList
int getLengthOfLinkedList(Node *&head)
{
    Node *temp = head;
    int length = 0;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

Node *getMiddleNode(Node *&head, int middle)
{
    //* No element in Linked List
    if (head == NULL)
    {
        cout << "Linked List is Empty No middle Element";
        return head;
    }

    //* Only one Element present so middle element is itself
    if (head->next == NULL)
    {
        return head;
    }

    Node *middleNode = head;

    //* Traverse till the node and return
    for (int i = 0; i < middle; i++)
    {
        middleNode = middleNode->next;
    }

    return middleNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *first = new Node(20);
    Node *second = new Node(30);
    Node *third = new Node(40);
    Node *fourth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;

    head = first;
    tail = fourth;

    printLinkedList(head);
    int length = getLengthOfLinkedList(head);
    cout << "Length Of Linked List : " << length << endl;

    int middle;
    if (length % 2 == 0)
        middle = (length / 2);
    else
        middle = (length / 2) + 1;

    Node *middleNode = getMiddleNode(head, middle);
    cout << "Middle Node : " << middleNode->data << endl;

    return 0;
}