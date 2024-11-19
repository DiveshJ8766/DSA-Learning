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
        Node *temp = new Node(data);

        //* step 2: Check head is NULL Or Not
        if (head == NULL)
        {
                head = temp;
                tail = temp;
                return;
        }

        //* step 3: Head is Not NULL
        temp->next = head;
        head->previous = temp;
        head = temp;
}

void insertionAtEnd(Node *&head, Node *&tail, int data)
{
        //* step 1 : Create a Empty Node
        Node *temp = new Node(data);

        //* step 2 : Check tail is Null or Not
        if (tail == NULL)
        {
                head = temp;
                tail = temp;
                return;
        }

        //* step 3 : tail is not NULL
        tail->next = temp;
        temp->previous = tail;
        tail = temp;
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

        printDoublyLinkedList(head);
        cout << "Length of Linked List : " << getLengthOfLinkedList(head) << endl;

        return 0;
}