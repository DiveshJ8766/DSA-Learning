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

//* Print Linked List
void printLinkedList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

//* Remove Duplicates
Node *removeDuplicates(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    //* step 1
    //* make current and current->next
    //* step 2
    //* compare both

    Node *currentNode = head;
    while (currentNode != NULL && currentNode->next != NULL)
    {
        Node *nextNode = currentNode->next;
        if (currentNode->data == nextNode->data)
        {
            Node *temp = nextNode;
            currentNode->next = currentNode->next->next;
            temp->next = NULL;
            delete (temp);
        }
        else
        {
            currentNode = nextNode;
        }
    }

    return head;
}

int main()
{
    Node *head = NULL;
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(2);
    Node *fifth = new Node(3);
    Node *sixth = new Node(3);
    Node *seventh = new Node(4);
    Node *eight = new Node(4);
    Node *nine = new Node(5);
    Node *tenth = new Node(6);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = nine;
    nine->next = tenth;

    head = first;

    printLinkedList(head);
    cout << "Removing duplicates..." << endl;
    head = removeDuplicates(head);
    cout << "Linked List after removing duplicates:" << endl;
    printLinkedList(head);

    return 0;
}