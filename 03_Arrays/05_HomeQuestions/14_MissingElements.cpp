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

int missingElement(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int index = v[i];
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

    int ans = missingElement(v);

    cout << "Ans : " << endl;
    cout << ans << endl;
    
    return 0;
}