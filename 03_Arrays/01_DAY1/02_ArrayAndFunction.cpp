#include <iostream>
#include <cstring>
using namespace std;

//* print double of elements in an array
void printDouble(int arr[], int size)
{
    cout << "Elements in an Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;
}

//* Make all 1
void printOneArray(int arr[], int size)
{
    cout << "Elements in an Array : ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 1;
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(int arr[], int size)
{
    cout << "Elements in an Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void incrementArray(int arr[],int size){
    arr[0]= 61;
    arr[1]= 72;
    printArray(arr,size);
}

int main()
{
    int arr[5];

    cout << "Enter Elements of an Array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    printDouble(arr, 5);
    printOneArray(arr, 5);

    int brr[10]={1,2,3};
    printArray(brr, 10);

    int crr[10]={0};
    memset(crr,2,40);
    printArray(crr,10);

    int garbageArray[10];
    printArray(garbageArray,10);

    //* pass by reference
    int passReference[2] = {21,98};
    incrementArray(passReference,2);
    printArray(passReference,2);

    return 0;
}