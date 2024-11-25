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

Node *createLinkedList(vector<int> &values, Node *&tail)
{
    if (values.empty())
        return NULL;

    Node *head = new Node(values[0]);
    Node *current = head;

    for (int i = 1; i < values.size(); i++)
    {
        current->next = new Node(values[i]);
        current = current->next;
    }

    tail = current;

    return head;
}

//* Circular Linked List using Map
bool checkCircularLinkedListUsingMap(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return true;

    //* Create a Map
    map<Node *, bool> visited;

    //* Traverse the Linked List
    Node *currentNode = head;

    while (currentNode != NULL)
    {
        //* If Node Already Exist
        if (visited[currentNode])
        {
            return true;
        }

        //* If  Node is Not already Visited then mark true
        visited[currentNode] = true;

        currentNode = currentNode->next;
    }

    //* If whole list is traversed then return false
    return false;
}

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

//* Single Traversing
bool checkLinkedList(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return true;

    Node *temp = head;

    while (temp != NULL && temp->next != head)
    {
        temp = temp->next;
    }

    if (temp == NULL)
        return false;

    return true;
}

int main()
{
    vector<int> values = {2, 4, 6, 7, 5};
    Node *tail = NULL;
    Node *head = createLinkedList(values, tail);
    tail->next = head;

    // printLinkedList(head);
    bool isCircularLinkedList = checkCircularLinkedListUsingMap(head);

    if (isCircularLinkedList)
        cout << "Linked List is Circular" << endl;
    else
        cout << "Linked List is Not Circular" << endl;

    return 0;
}