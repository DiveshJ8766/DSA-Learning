#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> arr, int start, int end)
{
    cout << "Elements of Array : " << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//* using Ternary operator
int binarySearch1(vector<int> &v, int start, int end, int target)
{
    printVector(v, start, end);
    cout << endl;

    //* first base case
    if (start > end)
    {
        return -1;
    }

    //* second base case
    int mid = start + ((end - start) / 2);
    if (v[mid] == target)
    {
        return mid;
    }

    //* one case and recursive call
   return (v[mid] > target )?  binarySearch1(v, start, mid - 1, target) :  binarySearch1(v, mid + 1, end, target);
    

}

int binarySearch(vector<int> &v, int start, int end, int target)
{
    printVector(v, start, end);
    cout << endl;

    //* first base case
    if (start > end)
    {
        return -1;
    }

    //* second base case
    int mid = start + ((end - start) / 2);
    if (v[mid] == target)
    {
        return mid;
    }

    //* one case and recursive call
    if (v[mid] > target)
    {
        return binarySearch(v, start, mid - 1, target);
    }
    else
    {
        return binarySearch(v, mid + 1, end, target);
    }
}

int main()
{

    vector<int> v = {15, 25, 35, 45, 65, 95};
    ;
    int target = 95;
    int start = 0;
    int end = v.size() - 1;

    if (binarySearch(v, start, end, target) != -1)
    {
        cout << "Element Found !!" << endl;
    }
    else
    {
        cout << "Element Not Found !!" << endl;
    }

    return 0;
}