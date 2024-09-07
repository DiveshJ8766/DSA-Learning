#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{
    //* base case
    if (index == size)
    {
        return;
    }

    //* processing
    cout << arr[index] << " ";

    //* recursive Call
    printArray(arr, size, index + 1);
}

//* Tail Recursion
void printArrayWithIndex(int arr[], int size)
{
    //* base case
    if (size == 0)
    {
        return;
    }

    //* print first Element
    cout << arr[0] << " ";

    //* recursive Call
    printArrayWithIndex(arr + 1, size - 1);
}

//* Head Recursion
void reverseTraversing(int arr[], int size, int index)
{
    //* base case
    if (index >= size)
    {
        return;
    }

    //* recursive Call
    reverseTraversing(arr, size, index + 1);

    //* processing
    cout << arr[index] << " ";
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int index = 0;

    cout << "Elements of array are :" << endl;
    printArray(arr, n, index);

    cout << endl
         << endl;

    cout << "Elements of array are :" << endl;
    printArrayWithIndex(arr, n);

    cout << endl
         << endl;

    cout << "Reverse Elements of array are :" << endl;
    reverseTraversing(arr, n, index);

    cout << endl
         << endl;

    return 0;
}