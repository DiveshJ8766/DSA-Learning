#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int> &ans, int &key)
{
    int start = 0;
    int end = ans.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (ans[mid] == key)
        {
            return mid;
        }

        if (ans[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 14, 15, 16, 17, 18, 23};
    int key = 13;

    int index = findIndex(v, key);

    if (index == -1)
    {
        cout << "Element Not Found.." << endl;
    }
    else
    {
        cout << "Element Found at Index : " << index << endl;
    }

    return 0;
}
