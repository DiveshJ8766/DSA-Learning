#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    cout << "Elements of Vector : ";
    for (auto value : v)
    {
        cout << value << " ";
    }
}

//* using count
vector<int> sort1sand0s(vector<int> v)
{
    vector<int> ans;
    int zerocount = 0;
    int onecount = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zerocount++;
        }
        if (v[i] == 1)
        {
            onecount++;
        }
    }

    //* insert0
    for (int i = 0; i < zerocount; i++)
    {
        ans.push_back(0);
    }

    //* insert1
    for (int i = 0; i < onecount; i++)
    {
        ans.push_back(1);
    }

    return ans;
}

//* using sort method
vector<int> sort1sand0s1(vector<int> v)
{
    sort(v.begin(), v.end());

    return v;
}

//* using two pointer
vector<int> sort1sand0s2(vector<int> v)
{
    int start = 0;
    int i= 0;
    int end = v.size() - 1;

    while (start < end)
    {
        if (v[start] == 0)
        {
            start++;
            i++;
        }
        
        if(v[start]== 1)
        {
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
        }
    }

    return v;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector<int> v(n);
    //* insert elements
    cout << "Enter Elements : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    // vector<int> ans = sort1sand0s(v);
    // vector<int> ans = sort1sand0s1(v);
    vector<int> ans = sort1sand0s2(v);

    printVector(ans);

    return 0;
}