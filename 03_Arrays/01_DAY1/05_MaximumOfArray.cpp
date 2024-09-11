#include <iostream>
#include <climits>
using namespace std;

int printMaximum(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int printMinimum(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {3, 37, 82, 73, 93, 97};
    int size = 6;

    cout<<"Maximum : " << printMaximum(arr, size) << endl;
    cout<<"Minimum : "<<printMinimum(arr,size)<<endl;

    return 0;
}