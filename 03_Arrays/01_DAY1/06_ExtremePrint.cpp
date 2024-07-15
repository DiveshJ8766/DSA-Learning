#include <iostream>
#include <climits>
using namespace std;

void printExtreme(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i] << " " << arr[j] << " ";
        }

        i++;
        j--;
    }
}

int main()
{
    int arr[] = {3, 37, 82, 5, 73, 93, 97};
    int size = 7;

    printExtreme(arr, size);

    return 0;
}