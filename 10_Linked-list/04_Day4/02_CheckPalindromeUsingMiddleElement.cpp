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

//* get Middle Node
Node *getMiddleNode(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *temp = head;

    Node *slow = temp;
    Node *fast = temp->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

//* Reverse Linked List
Node *reverseLinkedList(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

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

//* check palindrome
bool checkPalindrome(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        cout << "head 1 data : " << temp1->data << " and " << "head 2 data : " << temp2->data << endl;
        if (temp1->data != temp2->data)
            return false;

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *first = new Node(375);
    Node *second = new Node(961);
    Node *third = new Node(677);
    Node *fourth = new Node(596);
    Node *fifth = new Node(1);
    Node *sixth = new Node(1);
    Node *seventh = new Node(596);
    Node *eight = new Node(677);
    Node *nine = new Node(961);
    Node *tenth = new Node(375);

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

    //* Steps 1
    //* Get Middle Node
    Node *middleNode = getMiddleNode(head);
    cout << "Middle Node : " << middleNode->data << endl;

    //* Step 2
    //* Reverse linked List from the middle->next Node
    Node *reverseLinkedListHead = reverseLinkedList(middleNode->next);
    cout << "Reverse Linked List Head : " << reverseLinkedListHead->data << endl;
    middleNode->next = reverseLinkedListHead;

    printLinkedList(head);

    //* step 3
    //* Now check the head and MiddleNode->next
    Node *head1 = head;
    Node *head2 = middleNode->next;

    bool isPalindrome = checkPalindrome(head1, head2);
    if (isPalindrome)
        cout << "It is A Palindrome..." << endl;
    else
        cout << "It is not a Palindrome..." << endl;
    return 0;
}