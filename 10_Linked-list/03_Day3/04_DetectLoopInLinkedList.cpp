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

//* Approach 1 : Detect Cycle using Map Approach
bool detecdetectCircularLinkedListUsingMap(Node *&head) {
    
}

//* Approach 2 : Slow and Fast Pointer
bool detectCircularLinkedListUsingSlowFastPointer(Node *&head)
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

int main()
{
    vector<int> values{1, 2, 3, 4, 5, 6};
    Node *head = NULL;
    Node *tail = NULL;

    head = createALinkedList(values, tail);
    printLinkedList(head);

    cout << "Tail : " << tail->data << endl;

    bool checkLinkedListHasLoop = detectCircularLinkedListUsingSlowFastPointer(head);

    if (checkLinkedListHasLoop)
        cout << "Linked List is Circular..." << endl;
    else
        cout << "Linked List is Not Circular..." << endl;

    deleteLinkedList(head);

    return 0;
}