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
void sortNegatives(vector<int> &v)
{
    sort(v.begin(), v.end());
}

//* Dutch national Flag Algorithm
void sortNegatives1(vector<int> &v)
{
    int low = 0;
    int high = v.size() - 1;

    while (low < high)
    {
        if (v[low] < 0)
        {
            low++;
        }
        else if (v[high] >= 0)
        {
            high--;
        }
        else
        {
            swap(v[low], v[high]);
        }
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

    sortNegatives1(v);

    cout << "After : " << endl;
    printVector(v);

    return 0;
}