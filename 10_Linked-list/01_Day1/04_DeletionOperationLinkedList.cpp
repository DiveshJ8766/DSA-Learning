#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int getLengthOfLinkedList(Node *head)
{
    int length = 0;

    Node *currentNode = head;

    while (currentNode != NULL)
    {
        length++;
        currentNode = currentNode->next;
    }

    return length;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    //* Position Negative value check
    if (position < 1)
    {
        cout << "Position should be greater than 1 or equals to 1" << endl;
        return;
    }

    //* Head and Tail are NULL
    if (head == NULL && tail == NULL)
    {
        cout << "There is no Node to Delete.. Please Validate Onces" << endl;
        return;
    }

    int length = getLengthOfLinkedList(head);

    //* Exceed length
    if (position > length)
    {
        cout << "Position Exceed the Actual Length of LinkedList" << endl;
        return;
    }

    //* If deletion is at Head
    if (position == 1)
    {
        Node *currentNode = head;

        head = head->next;
        currentNode->next = NULL;

        //* set tail as NULL
        if (head == NULL)
        {
            tail = NULL;
        }
        delete (currentNode);
        return;
    }

    //* If deletion is at Tail
    if (position == length)
    {
        Node *previousNode = head;

        while (previousNode->next != tail)
        {
            previousNode = previousNode->next;
        }

        delete tail;

        tail = previousNode;

        tail->next = NULL;

        return;
    }

    //* Delete at Any Position
    Node *previousNode = head;
    int i = 1;
    while (i < (position - 1))
    {
        previousNode = previousNode->next;
        i++;
    }

    Node *currentNode = previousNode->next;

    previousNode->next = currentNode->next;
    currentNode->next = NULL;
    delete (currentNode);
    return;
}

int main()
{

    return 0;
}