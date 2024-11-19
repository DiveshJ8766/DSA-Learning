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

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    // Constructor
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    // Destructor
    ~DoublyLinkedList()
    {
        deleteLinkedList();
    }

    // Utility to delete the entire linked list
    void deleteLinkedList()
    {
        Node *temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        tail = NULL; // Ensure tail is also reset
    }

    // Print the linked list
    void printDoublyLinkedList()
    {
        Node *temp = head;
        cout << "Elements of Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Get the length of the linked list
    int getLengthOfLinkedList()
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

    // Insertion at the head
    void insertionAtHead(int data)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        { // If the list is empty
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }

    // Insertion at the end
    void insertionAtEnd(int data)
    {
        Node *newNode = new Node(data);

        if (tail == NULL)
        { // If the list is empty
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }

    // Insertion at a specific position
    void insertionAtPosition(int position, int data)
    {
        if (position < 1)
        {
            cout << "Invalid position. Position must be >= 1." << endl;
            return;
        }

        int length = getLengthOfLinkedList();
        if (position > length + 1)
        {
            cout << "Position out of range. Valid range is 1 to " << length + 1 << "." << endl;
            return;
        }

        if (position == 1)
        {
            insertionAtHead(data);
            return;
        }

        if (position == length + 1)
        {
            insertionAtEnd(data);
            return;
        }

        Node *newNode = new Node(data);
        Node *temp = head;

        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next->previous = newNode;
        temp->next = newNode;
        newNode->previous = temp;
    }
};

int main()
{
    DoublyLinkedList dll;

    dll.insertionAtHead(23);
    dll.insertionAtHead(56);
    dll.insertionAtEnd(80);
    dll.insertionAtEnd(63);

    dll.insertionAtHead(76);
    dll.insertionAtHead(87);
    dll.insertionAtEnd(90);
    dll.insertionAtEnd(123);
    dll.insertionAtHead(234);
    dll.insertionAtHead(345);
    dll.insertionAtEnd(390);
    dll.insertionAtPosition(1, 54);
    dll.insertionAtPosition(12, 100);
    dll.printDoublyLinkedList();
    cout << "Length of Linked List: " << dll.getLengthOfLinkedList() << endl;

    dll.insertionAtPosition(12, 99);
    dll.printDoublyLinkedList();
    cout << "Length of Linked List: " << dll.getLengthOfLinkedList() << endl;

    // Destructor will be called here automatically
    return 0;
}
