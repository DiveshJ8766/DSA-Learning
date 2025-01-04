#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Elements of Array : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void mergeTwoSortedArray(int arr1[], int size1, int arr2[], int size2)
{
    int size = size1 + size2;
    int arr[size];

    printArray(arr1, size1);
    printArray(arr2, size2);

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }

    printArray(arr, size);
}

int main()
{

    int arr1[] = {2, 15, 16, 20, 40, 50};
    int arr2[] = {1, 3, 4, 5, 6, 7, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Size of Arr1 : " << size1 << " " << "Size of Arr2 : " << size2 << endl;

    mergeTwoSortedArray(arr1, size1, arr2, size2);

    return 0;
}