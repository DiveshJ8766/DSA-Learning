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

//* print linked list
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

//* delete linked list
void deleteLinkedList(Node *&head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
    }
}

//* create a linked list using vector
Node *createALinkedList(vector<int> &values, Node *&tail)
{
    //* if vector dont have Element return NULL Head
    if (values.empty())
        return NULL;

    //* create Newly head and Tail
    Node *tempLinkedListHead = new Node(values[0]);
    Node *tempLinkedListTail = tempLinkedListHead;

    //* Traverse through the element of Linked List
    int i = 1;
    while (i < values.size())
    {
        tempLinkedListTail->next = new Node(values[i]);
        tempLinkedListTail = tempLinkedListTail->next;
        i++;
    }

    //* Update the Tail
    tail = tempLinkedListTail;

    //* return the head of the LinkedList
    return tempLinkedListHead;
}

//* Approach 1 : Traverse one by one
bool checkCircularLinkedListUsingTraverseral(Node *&head)
{
    //* head is null return it
    if (head == NULL)
        return false;

    //* only one element and it is pointing to head return true
    if (head->next == head)
    {
        return true;
    }

    //* Traversing the Linked List one by one
    Node *tempNode = head;
    while (tempNode->next != NULL && tempNode->next != head)
    {
        tempNode = tempNode->next;
    }

    //* if tempNode->next head hai to return hua hoga
    return tempNode->next == head;
}

//* Approach 2 : Slow and Fast Pointer Approach
bool checkCircularLinkedListUsingSlowFastPointer(Node *&head)
{

    //* head is null return it
    if (head == NULL)
        return false;

    //* only one element and it is pointing to head return true
    if (head->next == head)
    {
        return true;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        //* move slow 1 step
        slow = slow->next;

        //* move fast 2 step
        fast = fast->next->next;

        //* check the condition after wards as slow and fast is already pointing to head
        if (slow == fast)
            return true;
    }

    return false;
}

//* Approach 3 : Map Approach
bool checkCircularLinkedListUsingMap(Node *&head)
{
    //* head is null return it
    if (head == NULL)
        return false;

    //* Create Map to mark the visited Node
    map<Node *, bool> visited;

    Node *tempNode = head;

    while (tempNode != NULL)
    {
        //* check if Node is visited true that means linked list is circular
        if (visited[tempNode])
            return true;
        else
        {
            //* and it not visited then mark it as visited
            visited[tempNode] = true;
        }

        tempNode = tempNode->next;
    }

    //* at last return
    return false;
}

int main()
{
    vector<int> values = {1, 2, 3, 4, 5, 6};
    Node *head = NULL;
    Node *tail = NULL;

    head = createALinkedList(values, tail);
    tail->next = head;

    cout << "Head of Linked List : " << head->data << endl;
    cout << "Tail of Linked List : " << tail->data << endl;

    bool checkCircularLinkedList = checkCircularLinkedListUsingMap(head);

    if (checkCircularLinkedList)
        cout << "Linked List is Circular..." << endl;
    else
        cout << "Linked List is Not Circular..." << endl;

    // deleteLinkedList(head);

    return 0;
}