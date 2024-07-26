#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    cout << "Elements of Vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

//* Brute Force Approach
void sortColors(vector<int> &v)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zeroCount++;
        }
        else if (v[i] == 1)
        {
            oneCount++;
        }
        else
        {
            twoCount++;
        }
    }

    v.clear();

    for (int i = 0; i < zeroCount; i++)
    {
        v.push_back(0);
    }

    for (int i = 0; i < oneCount; i++)
    {
        v.push_back(1);
    }

    for (int i = 0; i < twoCount; i++)
    {
        v.push_back(2);
    }
}

//* Sort function Approach
void sortColors1(vector<int> &v)
{
    sort(v.begin(), v.end());
}

//* Three Pointer Approach
void sortColors2(vector<int> &v)
{
    int zeroPointer = 0;
    int onePointer = 0;
    int twoPointer = v.size() - 1;

    while (onePointer <= twoPointer)
    {
        if (v[onePointer] == 0)
        {
            swap(v[onePointer], v[zeroPointer]);
            onePointer++;
            zeroPointer++;
        }
        else if (v[onePointer] == 1)
        {
            onePointer++;
        }
        else
        {
            swap(v[onePointer], v[twoPointer]);
            twoPointer--;
        }

        cout << "low : " << zeroPointer << "mid : " << onePointer << "high :" << twoPointer << endl;
        printVector(v);
    }
}

int main()
{
    int size;
    cout << "Enter Size of Vector : ";
    cin >> size;

    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter Element of Index " << i << " :";
        cin >> element;

        v.push_back(element);
    }

    cout << "Before : " << endl;
    printVector(v);

    // sortColors(v);
    // sortColors1(v);
    sortColors2(v);

    cout << "After : " << endl;
    printVector(v);

    return 0;
}