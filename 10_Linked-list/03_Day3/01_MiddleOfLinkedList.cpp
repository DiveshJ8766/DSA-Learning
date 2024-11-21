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

    ~Node()
    {
        cout << "Deleting the Node with data : " << this->data << endl;
    }
};

//* Print LinkedList
void printLinkedList(Node *&head)
{
    cout << "Elements of Linked List : " << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

//* Length Of LinkedList
int getLengthOfLinkedList(Node *&head)
{
    Node *temp = head;
    int length = 0;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

//* Middle element using Count Method
Node *getMiddleNode(Node *&head, int middleIndex)
{
    //* No element in Linked List
    if (head == NULL)
    {
        cout << "Linked List is Empty No middle Element";
        return head;
    }

    //* Only one Element present so middle element is itself
    if (head->next == NULL)
    {
        return head;
    }

    Node *middleNode = head;

    //* Traverse till the node and return
    for (int i = 0; i < (middleIndex - 1); i++)
    {
        middleNode = middleNode->next;
    }

    return middleNode;
}

//* Middle element using Tortoise Method
Node *getMiddleNodeUsingTortoiseMethod(Node *&head)
{
    //* Empty List
    if (head == NULL)
    {
        cout << "Linked List is Empty No Middle Element." << endl;
        return head;
    }

    //* Traverse to the Middle Element
    Node *slow = head;

    //* if second element is considered as Middle Element
    // Node *fast = head;

    //* if first element is considered as Middle Element
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *first = new Node(20);
    Node *second = new Node(30);
    Node *third = new Node(40);
    Node *fourth = new Node(50);
    Node *fifth = new Node(60);
    Node *sixth = new Node(70);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    head = first;
    tail = sixth;

    printLinkedList(head);
    int length = getLengthOfLinkedList(head);
    cout << "Length Of Linked List : " << length << endl;

    //* Middle Index if even or odd Number of Elements

    //? even case :  considering the starting element as middle Element
    int middleIndex = (length % 2 == 0) ? (length / 2) : ((length / 2) + 1);

    //? even case :  considering the next element as middle Element
    // int middleIndex = (length / 2) + 1;

    //* Middle Element
    Node *middleNode = getMiddleNode(head, middleIndex);
    if (middleNode != NULL)
        cout << "Middle Node : " << middleNode->data << endl;

    //* Middle Element Using tortoise Method;
    Node *midNode = getMiddleNodeUsingTortoiseMethod(head);
    if (midNode != NULL)
        cout << "Middle Node : " << midNode->data << endl;

    //* Deallocating the dynamic Memory
    Node *temp = head;
    while (temp != NULL)
    {
        Node *toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}