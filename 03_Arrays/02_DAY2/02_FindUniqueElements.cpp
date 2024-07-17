#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans ^= v[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Size of Vector : ";
    cin >> n;

    vector<int> v(n);
    cout<<"Enter Elements : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int unique = findUnique(v);
    cout << "Unique Number : " << unique << endl;

    return 0;
}