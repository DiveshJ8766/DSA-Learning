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

vector<int> linkedListToArray(Node *&head)
{
    vector<int> linkedList;

    if (head == NULL)
    {
        return linkedList;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        linkedList.push_back(temp->data);
        temp = temp->next;
    }

    return linkedList;
}

bool checkPalindrome(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {
        if (v[start] != v[end])
            return false;
        start++;
        end--;
    }

    return true;
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(1);

    printLinkedList(head);

    vector<int> vectorArray = linkedListToArray(head);
    for (auto i : vectorArray)
    {
        cout << " Value : " << i << " " << endl;
    }

    bool isPalindrome = checkPalindrome(vectorArray);

    if (isPalindrome)
        cout << "It is a Palindrome..." << endl;
    else
        cout << "Not a Palindrome..." << endl;

    return 0;
}