#include <iostream>
#include <vector>
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

Node *createALinkedList(vector<int> &values, Node *&tail)
{
    if (values.empty())
        return NULL;

    Node *tempLinkedListHead = new Node(values[0]);
    Node *tempLinkedListTail = tempLinkedListHead;

    for (int i = 1; i < values.size(); i++)
    {
        tempLinkedListTail->next = new Node(values[i]);
        tempLinkedListTail = tempLinkedListTail->next;
    }

    tail = tempLinkedListTail;

    return tempLinkedListHead;
}

void printLinkedList(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

void deleteLinkedList(Node *&head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
    }
}

int main()
{
    vector<int> values{1, 2, 3, 4, 5, 6};
    Node *head = NULL;
    Node *tail = NULL;

    head = createALinkedList(values, tail);
    printLinkedList(head);

    cout << "Tail : " << tail->data << endl;

    deleteLinkedList(head);

    return 0;
}