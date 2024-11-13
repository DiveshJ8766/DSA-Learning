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
};

int main()
{
    //* Create a head
    Node *head;

    //* Create Initialize Nodes
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;

    //* Create Nodes in Heap Memory
    first = new Node(13);
    second = new Node(98);
    third = new Node(32);
    fourth = new Node(73);

    //* Connect Nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    head = first;

    //? Traversing the Linked List
    cout << "Elements of Linked List : " << endl;

    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;

    return 0;
}