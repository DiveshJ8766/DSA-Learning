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

//* print linked list
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

//* getLinkedList Length
int getLinkedListLength(Node *&head)
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

//* reverse LinkedList
Node *reverseLinkedList(Node *&head, Node *&newNode, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    if (k > getLinkedListLength(head))
        return head;

    Node *previous = NULL;
    Node *current = head;
    Node *nextNode = NULL;

    while (k--)
    {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    newNode = current;

    return previous;
}

Node *reverseLinkedListInKGroup(Node *&head, int k)
{
    //* list is null or only one element return head
    if (head == NULL || head->next == NULL)
        return head;

    //* k length is greater than length of linkedlist
    if (k > getLinkedListLength(head) || k == 0)
        return head;

    Node *nextNode = NULL;

    Node *reverseLinkedListHead = reverseLinkedList(head, nextNode, k);

    if (head != NULL)
    {
        head->next = reverseLinkedListInKGroup(nextNode, k);
    }

    return reverseLinkedListHead;
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);

    int k = 4;

    printLinkedList(head);

    Node *reverseLinkedListInKGroupHead = reverseLinkedListInKGroup(head, k);

    printLinkedList(reverseLinkedListInKGroupHead);

    return 0;
}