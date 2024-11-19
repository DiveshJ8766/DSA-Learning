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

void printDoublyLinkedList(Node *head)
{
        cout << "Elements of Linked list : " << endl;
        while (head != NULL)
        {
                cout << head->data << " ";
                head = head->next;
        }

        cout << endl;
}

int getLengthOfLinkedList(Node *head)
{
        int length = 0;

        while (head != NULL)
        {
                length++;
                head = head->next;
        }

        return length;
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

        printDoublyLinkedList(head);
        cout << "Length of Linked List : " << getLengthOfLinkedList(head) << endl;

        return 0;
}