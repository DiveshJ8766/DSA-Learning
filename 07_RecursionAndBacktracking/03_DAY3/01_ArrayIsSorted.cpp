#include <iostream>
#include <vector>
using namespace std;

//* with array as pointer
bool isSortedPointer(int arr[], int size)
{
    //* base case if there is only one element it is sorted
    if (size == 1)
    {
        return true;
    }

    //* check next element
    if (arr[0] > arr[1])
    {
        return false;
    }

    return isSortedPointer(arr+1,size-1);
}

//* Check vector is Sorted Using Vector
bool isSorted(vector<int> &arr, int index)
{
    //*  Base case
    //* if we are standing at end return true;
    if (index == arr.size() - 1)
    {
        return true;
    }

    //* check next element
    if (arr[index] > arr[index + 1])
    {
        return false;
    }

    return isSorted(arr, index + 1);
}

//* Check Array is Sorted Using Array
bool isSortedArray(int arr[], int size, int index)
{
    //* base case
    //* reached to end element return
    if (index == size - 1)
    {
        return true;
    }

    //* check next element
    if (arr[index] > arr[index + 1])
    {
        return false;
    }

    return isSortedArray(arr, size, index + 1);
}

int main()
{

    vector<int> arr1 = {1, 3, 4, 7, 4, 3, 2, 1};
    int a1[] = {3, 4, 2, 1, 42, 5};
    int size1 = sizeof(a1) / sizeof(a1[0]);

    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8};
    int a2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size2 = sizeof(a2) / sizeof(a2[0]);

    int index = 0;

    bool check = isSorted(arr2, index);
    if (check)
        cout << "Array is Sorted !" << endl;
    else
        cout << "Array is Not Sorted !" << endl;

    bool ch = isSortedArray(a2, size2, index);
    if (ch)
        cout << "Array is Sorted !" << endl;
    else
        cout << "Array is Not Sorted !" << endl;

     ch = isSortedPointer(a1, size2);
    if (ch)
        cout << "Array is Sorted !" << endl;
    else
        cout << "Array is Not Sorted !" << endl;

    return 0;
}