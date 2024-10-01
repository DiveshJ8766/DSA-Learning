#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{
    cout << "Elements of Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void mergeTwoSortedArray(int *arr, int start, int end)
{
    //* first create two arrays

    //* find mid
    int mid = start + (end - start) / 2;

    //*calculate lengths
    int length1 = mid - start + 1;
    int length2 = end - mid;

    //* create Dynamic Array
    int *leftArray = new int[length1];
    int *rightArray = new int[length2];

    //* copy all elements to newly created arrays
    //* here we have to start arr index from start
    //* but for left and right array we need to start from zero th index
    int index = start;
    int i = 0;
    while (i  < length1)
    {
        leftArray[i++] = arr[index++];
    }

    index = mid + 1;
    i = 0;
    while (i < length2)
    {
        rightArray[i++] = arr[index++];
    }

    //* merge two arrays
    int firstArrayIndex = 0;
    int secondArrayIndex = 0;
    int mainArrayIndex = start;

    //* while both array have same index
    while (firstArrayIndex < length1 && secondArrayIndex < length2)
    {
        //* left element is smaller put it in mainArray
        if (leftArray[firstArrayIndex] < rightArray[secondArrayIndex])
            arr[mainArrayIndex++] = leftArray[firstArrayIndex++];

        //* right element is smaller put it in mainArray
        else
            arr[mainArrayIndex++] = rightArray[secondArrayIndex++];
    }

    //* check if firstArray have elements
    while (firstArrayIndex < length1)
    {
        arr[mainArrayIndex++] = leftArray[firstArrayIndex++];
    }

    //* check if secondArray have elements
    while(secondArrayIndex < length2)
        arr[mainArrayIndex++] = rightArray[secondArrayIndex++]; 

    //* delete dynamic arrays
    delete [] leftArray;
    delete [] rightArray;
}

void mergeSort(int *arr, int start, int end)
{
    //* base case
    //* start === end => single Elements
    //* start > end => Invalid case
    if (start >= end)
    {
        return;
    }

    //* calculate Mid
    int mid = start + (end - start) / 2;

    //* Left Recursive Call
    mergeSort(arr, start, mid);

    //* Right Recursive Call
    mergeSort(arr, mid + 1, end);

    //* Merge the two sorted array
    mergeTwoSortedArray(arr, start, end);
}

int main()
{

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    //* Print Array
    cout << "Before ";
    printArray(arr, n);

    //* starting and Ending Index
    int start = 0;
    int end = n - 1;

    //* Merge Sort
    mergeSort(arr, start, end);

    //* Print Array
    cout << "After ";
    printArray(arr, n);

    return 0;
}