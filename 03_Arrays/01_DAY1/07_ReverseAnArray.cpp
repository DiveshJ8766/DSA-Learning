#include <iostream>
#include <climits>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printReverse(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printArray(arr, size);
}

void printReverse1(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    printArray(arr, size);
}


int main()
{
    int arr[] = {3, 37, 82, 5, 15, 73, 93, 97};
    int size = 8;

    cout<<"original Array : "<<endl;
    printArray(arr,size);

    cout << "Reverse Of Array : " << endl;
    printReverse(arr, size);

    cout << "Reverse Of Array : " << endl;
    printReverse1(arr, size);

    return 0;
}