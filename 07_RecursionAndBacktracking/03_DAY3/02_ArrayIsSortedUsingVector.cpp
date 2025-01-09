#include <iostream>
#include <vector>
using namespace std;

//* using v.data()
bool isArraySorted(int *arr, int size)
{
    //* base case
    if (size == 1)
    {
        return true;
    }

    //* Processing
    if (arr[0] > arr[1])
    {
        return false;
    }

    //* Recursion Relation
    return isArraySorted(arr + 1, (size - 1));
}

//* using iterators
bool isArraySorted1(vector<int>::iterator index, vector<int>::iterator end)
{
    //* base case
    if (index == end - 1)
    {
        return true;
    }

    //* Processing
    if (*index > *(index + 1))
    {
        return false;
    }

    //* Recursion Relation
    return isArraySorted1((index + 1), end);
}

int main()
{

    vector<int> v = {2, 3, 4, 5, 6, 7};

    // bool check = isArraySorted(v.data(), v.size());
    bool check = isArraySorted1(v.begin(), v.end());

    if (check)
    {
        cout << "Array is Sorted :)" << endl;
    }
    else
    {
        cout << "Array is Not Sorted :(" << endl;
    }

    return 0;
}