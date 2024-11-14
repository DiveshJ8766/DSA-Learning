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
void deleteNode(Node *&head, Node *&tail, int position)
{
    //* Position Negative value check
    if (position < 1)
    {
        cout << "Position should be greater than 1 or equals to 1" << endl;
        return;
    }

    //* Head and Tail are NULL
    if (head == NULL && tail == NULL)
    {
        cout << "There is no Node to Delete.. Please Validate Onces" << endl;
        return;
    }

    int length = getLengthOfLinkedList(head);

    //* Exceed length
    if (position > length)
    {
        cout << "Position Exceed the Actual Length of LinkedList" << endl;
        return;
    }

    //* If deletion is at Head
    if (position == 1)
    {
        Node *currentNode = head;

        head = head->next;
        currentNode->next = NULL;

        //* set tail as NULL
        if (head == NULL)
        {
            tail = NULL;
        }
        delete (currentNode);
        return;
    }

    //* If deletion is at Tail
    if (position == length)
    {
        Node *previousNode = head;

        while (previousNode->next != tail)
        {
            previousNode = previousNode->next;
        }

        delete tail;

        tail = previousNode;

        tail->next = NULL;

        return;
    }

    //* Delete at Any Position
    Node *previousNode = head;

    for (int i = 1; i < (position - 1); i++)
        previousNode = previousNode->next;

    Node *currentNode = previousNode->next;

    previousNode->next = currentNode->next;
    currentNode->next = NULL;
    delete (currentNode);
    return;
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
    Node *head = NULL;
    Node *tail = NULL;

    // insertAtBeginning(head, tail, 23);
    // insertAtEnd(head, tail, 24);
    // insertAtEnd(head, tail, 25);
    // insertAtEnd(head, tail, 26);
    // insertAtEnd(head, tail, 27);

    traverseList(head);

    cout << "\nDeleting node at Head" << endl;
    deleteNode(head, tail, 1);
    traverseList(head);
    cout << endl;

    cout << "\nDeleting node at Tail" << endl;
    deleteNode(head, tail, 4);
    traverseList(head);
    cout << endl;

    cout << "\nDeleting node at 2 Position" << endl;
    deleteNode(head, tail, 2);
    traverseList(head);
    cout << endl;

    cout << "\nDeleting node at 2 Position" << endl;
    deleteNode(head, tail, 2);
    traverseList(head);
    cout << endl;

    cout << "\nDeleting node at 2 Position" << endl;
    deleteNode(head, tail, 2);
    traverseList(head);
    cout << endl;

    return 0;
}