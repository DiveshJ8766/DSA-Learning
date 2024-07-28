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

//* sort and check adjacent
int duplicatesNumber(vector<int> v)
{
    //* sort
    sort(v.begin(),v.end());

    //* check adjacent
    for (int i = 0; i < (v.size() - 1); i++)
    {
        if (v[i] == v[i+1])
        {
            return v[i];
        }
    }

    return -1;
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

    int num = duplicatesNumber(v);
    cout << "Duplicate Number : " << num << endl;

    return 0;
}