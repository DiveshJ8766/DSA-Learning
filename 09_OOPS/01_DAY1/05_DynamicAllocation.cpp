#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    *a = 10;
    cout << "Value of A : " << *a << endl;

    int *arr = new int[5];
    cout << "Enter Elements : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Elements are : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    //* Deleting the pointer
    delete a;

    //* Deleting the array
    delete[] arr;

    cout << "\n\n\n\n"
         << endl;

    return 0;
}