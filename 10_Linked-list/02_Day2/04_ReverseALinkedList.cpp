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

//* Reverse Linked List Using Recursion
Node *reverseLinkedList(Node *previous, Node *current)
{
    //* base condition
    if (current == NULL)
        return previous;

    //* one case
    Node *nextNode = current->next;
    current->next = previous;

    //* recursive call
    return reverseLinkedList(current, nextNode);
}

//* Reverse Linked List Using Loops
Node *reverseLinkedListUsingLoop(Node *head)
{

    Node *previous = NULL;
    Node *current = head;

    while (current != NULL)
    {
        Node *nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
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

    //* Reverse Using Recursion
    Node *newHeadRecusively = reverseLinkedList(NULL, head);
    printLinkedList(newHeadRecusively);

    //* Reverse Using Loop
    Node *newHeadIteratively = reverseLinkedListUsingLoop(head);
    printLinkedList(newHeadIteratively);

    //* Free the allocated memory
    Node *temp = newHeadRecusively;
    while (temp != NULL)
    {
        Node *toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}