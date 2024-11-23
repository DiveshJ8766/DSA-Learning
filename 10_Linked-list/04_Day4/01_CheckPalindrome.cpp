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

//* Print LinkedList
void printLinkedList(Node *&head)
{
    cout << "Elements of Linked list : " << endl;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

//* Clone Linked List
Node *cloneLinkedListHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty..." << endl;
        return head;
    }

    Node *newHead = new Node(head->data);
    Node *newTail = newHead;
    Node *temp = head->next;

    while (temp != NULL)
    {
        Node *newNode = new Node(temp->data);
        newTail->next = newNode;
        newTail = newNode;
        temp = temp->next;
    }

    return newHead;
}

Node *reverseLinkedList(Node *&head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *nextNode = NULL;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

bool checkLinkedList(Node *&originalLinkedListHead, Node *&reversedLinkedListHead)
{
    Node *head1 = originalLinkedListHead;
    Node *head2 = reversedLinkedListHead;

    while (head1 != NULL && head2 != NULL)
    {
        cout << "head 1 :" << head1->data << " and head 2 : " << head2->data << endl;
        if (head1->data != head2->data)
            return false;

        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    // head->next->next->next->next = new Node(2);
    // head->next->next->next->next->next = new Node(1);

    printLinkedList(head);
    cout << endl;

    Node *clonedLinkedListHead = cloneLinkedListHead(head);
    printLinkedList(clonedLinkedListHead);
    cout << endl;

    Node *reverseLinkedListHead = reverseLinkedList(clonedLinkedListHead);
    printLinkedList(reverseLinkedListHead);

    bool checkPalindrome = checkLinkedList(head, reverseLinkedListHead);
    cout << "checkPalindrome : " << checkPalindrome << endl;

    if (checkPalindrome)
        cout << "Linked List is a Palindrome..." << endl;
    else
        cout << "Linked List is Not a Palindrome..." << endl;

    return 0;
}