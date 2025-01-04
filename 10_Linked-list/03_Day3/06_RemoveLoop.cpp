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

//* Create Linked List
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

//* print LinkedList
void printLinkedList(Node *&head)
{
    cout << "Elements of Linked List : " << endl;

    if (head == NULL)
        return;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

//* check loop is present or Not
bool isLoopPresent(Node *&head)
{
    //* If list is Empty or only one element present
    if (head == NULL || head->next == NULL)
        return false;

    Node *slow = head;
    Node *fast = head;

    //* Move the slow Pointer 1 step
    //* Move the fast Pointer 2 step
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

//* get loop starting point and return its Previous Point
Node *getSlowFastMettingNode(Node *&head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        Node *previous = fast;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return slow;
    }

    return NULL;
}

void getPreviousNodeAndRemoveLoop(Node *&head)
{
    //* List is Empty
    if (head == NULL)
        return;

    Node *loopingNode = getSlowFastMettingNode(head);

    //* No Loop Present so return NULL;
    if (loopingNode == NULL)
        return;

    cout << "Loop is Present at " << loopingNode->data << endl;

    Node *slow = head;
    Node *fast = loopingNode;

    //* this is the condition if slow and fast is at same head
    if (slow == fast)
    {
        //* traverse till the slow and break the link
        while (fast->next != slow)
        {
            fast = fast->next;
        }

        //* delink the loop
        fast->next = NULL;
        return;
    }

    //* Mantain the previous node
    Node *previous = NULL;

    //* Move slow and Fast
    while (slow != fast)
    {
        previous = fast;
        slow = slow->next;
        fast = fast->next;
    }

    cout << "Node Before Looping Node : " << previous->data << endl;
    previous->next = NULL;

    return;
}

int main()
{
    vector<int> values = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};

    Node *tail = NULL;
    Node *head = createALinkedList(values, tail);
    tail->next = head;

    if (!isLoopPresent(head))
        printLinkedList(head);

    cout << "Removing the Loop : " << endl;
    getPreviousNodeAndRemoveLoop(head);

    if (!isLoopPresent(head))
        printLinkedList(head);

    return 0;
}