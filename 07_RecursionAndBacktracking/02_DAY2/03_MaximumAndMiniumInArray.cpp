#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void getMaximum(int arr[], int size, int index, int &max)
{

    //* base case
    if (index >= size)
    {
        return;
    }

    //* Processing
    if (arr[index] > max)
    {
        max = arr[index];
    }

    //* Recursive Call
    getMaximum(arr, size, index + 1, max);
}

void getMaximum1(int arr[], int size, int index, int &maxi)
{

    //* base case
    if (index >= size)
    {
        return;
    }

    //* Processing
    maxi = max(arr[index], maxi);

    //* Recursive Call
    getMaximum1(arr, size, index + 1, maxi);
}

void getMinimum(int arr[], int size, int index, int &mini)
{

    //* base case
    if (index >= size)
    {
        return;
    }

    //* Processing
    if (arr[index] < mini)
    {
        mini = arr[index];
    }

    //* Recursive Call
    getMinimum(arr, size, index + 1, mini);
}

void getMinimum1(int arr[], int size, int index, int &mini)
{

    //* base case
    if (index >= size)
    {
        return;
    }

    //* Processing
    mini = min(arr[index], mini);

    //* Recursive Call
    getMinimum1(arr, size, index + 1, mini);
}

int main()
{
    int arr[10] = {12, 129, 30, 04, 15, 86, 71, 28, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = 0;

    //* Declare Minimum and Maximum
    int max = INT_MIN;
    int min = INT_MAX;

    cout << "Elements of array are :" << endl;
    printArray(arr, size);

    cout << endl
         << endl;

    getMaximum(arr, size, index, max);

    cout << "Maximum Element : " << max << endl;

    getMaximum1(arr, size, index, max);

    cout << "Maximum Element : " << max << endl;

    getMinimum(arr, size, index, min);

    cout << "Minimum Element : " << min << endl;

    getMinimum1(arr, size, index, min);

    cout << "Minimum Element : " << min << endl;

    return 0;
}