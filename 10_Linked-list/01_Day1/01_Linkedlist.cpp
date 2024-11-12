#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();

    one->data = 5;
    two->data = 6;
    three->data = 8;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head->next = one;

    cout << "Elements of Linked List : " << endl;
    Node *current = head->next;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;

    return 0;
}