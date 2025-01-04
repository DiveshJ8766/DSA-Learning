#include <iostream>
#include <vector>
#include <map>
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

//* create a Linked List
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

//* Printing Linked List
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

//* delete Linked List
void deleteLinkedList(Node *&head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
    }
}

//* Slow and Fast Pointer
Node *startingLoopPointNode(Node *&head)
{
    //* if one element in Linked List and list is empty
    if (head == NULL || head->next == NULL)
    {
        cout << "Linked List is NULL" << endl;
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    //* to check if it has cycle or not
    bool hasCycle = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        //* cycle found
        if (slow == fast)
        {
            slow = head;
            //* if cycle found
            hasCycle = true;
            break;
        }
    }

    //* if No cycle found return NULL
    if (!hasCycle)
    {
        return NULL;
    }

    //* if cycle found then find starting point
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    //** return starting point
    return slow;
}

Node *intersectionOfSlowAndFastNode(Node *&head)
{
    //* If list is Empty
    if (head == NULL)
    {
        return head;
    }

    //* start with head
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        //* slow moves 1 step and fast moves 2 steps
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return fast;
        }
    }

    return NULL;
}

Node *pointOfLoopStart(Node *&head)
{
    if (head == NULL)
        return NULL;

    Node *intersectionNode = intersectionOfSlowAndFastNode(head);

    if (intersectionNode == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = intersectionNode;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}
int main()
{
    vector<int> values{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    Node *head = NULL;
    Node *tail = NULL;

    head = createALinkedList(values, tail);
    tail->next = head->next->next->next;
    // printLinkedList(head);

    Node *startingPointNode = pointOfLoopStart(head);
    cout << "Starting Point Node : " << ((startingPointNode != NULL) ? startingPointNode->data : 0) << endl;

    // deleteLinkedList(head);

    return 0;
}