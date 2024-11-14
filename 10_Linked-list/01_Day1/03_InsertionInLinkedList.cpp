#include <iostream>
using namespace std;

//* Create a Node
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
};

//* Get length of Linked List
int getLengthOfLinkedList(Node *head)
{
    int length = 0;
    Node *currentNode = head;
    while (currentNode != NULL)
    {
        length++;
        currentNode = currentNode->next;
    }

    return length;
}

//* Insertion at Ending
void insertAtEnd(Node *&head, Node *&tail, int data)
{
    //* Step 1 : Create a Node
    Node *newNode = new Node(data);

    //* step 2: check it first Node then Head and Tail will be this newNode
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    //* step 3: new Node will be tail
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

//* Insertion at beginning
void insertAtBeginning(Node *&head, Node *&tail, int data)
{
    //* step 1 : Create New Node with data
    Node *newNode = new Node(data);

    //* step 2: check it first Node then Head and Tail will be this newNode
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    //* step 3 : newNode will be the head
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

//* Insertion at Middle
void insertAfter(Node *&head, Node *&tail, int data, int position)
{
    if (position < 1) //* Invalid position check
    {
        cout << "Invalid position: Position should be 1 or greater." << endl;
        return;
    }

    //* step 1: Create a Node With Data
    Node *newNode = new Node(data);

    //* step 2: If Head and Tail Both are NULL
    if (head == NULL && tail == NULL)
    {
        if (position == 1) //* Insert as the first node
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            cout << "Position out of bounds for an empty list." << endl;
            delete newNode;
        }
        return;
    }

    //* step 3: loop till the position and insert it
    else
    {

        if (position == 1) //* Insert at the beginning if position is 1
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *currentNode = head;
        for (int i = 1; (i < (position - 1)) && currentNode != NULL; i++)
        {
            currentNode = currentNode->next;
        }

        if (currentNode == NULL)
        {
            cout << "Position out of bounds" << endl;
            delete newNode;
            return;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;

        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    //* Check for Position if Negative and less than 1 return
    if (position < 1)
    {
        cout << "Please Enter Valid Position greater than 1" << endl;
        return;
    }

    //* head and tail is NULL

    if (head == NULL && tail == NULL)
    {
        //* if first position

        //* step 1 : create node
        Node *newNode = new Node(data);

        //* step 2 : check position 1
        if (position == 1)
        {
            //* step 3 : pointer updation
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            cout << "Please Enter Valid Position (Entered Value is OutofBound)" << endl;
            delete (newNode);
            return;
        }
    }

    //* to insert data at first position (insert at head)
    if (position == 1)
    {
        insertAtBeginning(head, tail, data);
        return;
    }

    //* to insert data at tail position (insert at tail)
    if (position == getLengthOfLinkedList(head))
    {
        Node *currentNode = head;
        while (currentNode->next->next != NULL)
        {
            currentNode = currentNode->next;
        }

        //* step 2 : Create New Node
        Node *newNode = new Node(data);

        //* check for Current node is at end and position
        if (currentNode == NULL)
        {
            cout << "Position is OutOfBound" << endl;
            return;
        }

        cout << "current Node : " << currentNode->data << endl;

        newNode->next = currentNode->next;
        currentNode->next = newNode;

        return;
    }

    //* To insert At Position

    //* step 1 : Reach to Position
    Node *currentNode = head;
    int i = 1;
    while (i < (position - 1) && currentNode != NULL)
    {
        currentNode = currentNode->next;
        i++;
    }

    //* step 2 : Create New Node
    Node *newNode = new Node(data);

    //* check for Current node is at end and position
    if (currentNode == NULL)
    {
        cout << "Position is Outof Bound" << endl;
        delete (newNode);
        return;
    }

    //* Step 3 : Assign position
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

//* Traversing a Linked List
void traverseList(Node *&head)
{
    cout << "Elements of Linked List : " << endl;

    Node *currentNode = head;
    while (currentNode != NULL)
    {
        cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }

    cout << endl;
}

int main()
{
    //* create a head and Tail
    Node *head = NULL;
    Node *tail = NULL;

    insertAtBeginning(head, tail, 30);
    insertAtEnd(head, tail, 45);

    insertAtBeginning(head, tail, 23);
    insertAtBeginning(head, tail, 93);
    // insertAtEnd(head, tail, 67);
    // insertAtEnd(head, tail, 67);
    // insertAtEnd(head, tail, 89);
    insertAtPosition(head, tail, 98, 1);

    traverseList(head);

    cout << "\nLength of Linked List : " << getLengthOfLinkedList(head) << endl;

    return 0;
}