#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void printVector(vector<int> ans)
{
    cout << "\nElements of Vector : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

vector<int> printUnionOfArray1(vector<int> v1, vector<int> v2)
{
    vector<int> ans;
    //* Without Duplicates
    for (int i = 0; i < v1.size(); i++)
    {
        ans.push_back(v1[i]);
    }

    for (int i = 0; i < v2.size(); i++)
    {
        ans.push_back(v2[i]);
    }

    return ans;
}

vector<int> printUnionOfArray2(vector<int> v1, vector<int> v2)
{
    vector<int> ans;
    //* With Duplicates

    //* first find intersection of both array
    //* here second array is marked as INT_MIN
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
            {
                v2[j] = INT_MIN;
            }
        }
    }

    //* HERE First Array is marked
    for (int i = 0; i < v1.size() - 1; i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[i] != INT_MIN && v1[i] == v1[j])
            {
                v1[j] = INT_MIN;
            }
        }
    }

    //* Check and push of v1
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != INT_MIN)
            ans.push_back(v1[i]);
    }

    //* check and push of v2
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] != INT_MIN)
            ans.push_back(v2[i]);
    }

    return ans;
}

int main()
{
    int n1;
    cout << "Enter Size of Vector 1 : ";
    cin >> n1;

    int n2;
    cout << "Enter Size of Vector 2 : ";
    cin >> n2;

    vector<int> v1(n1);
    cout << "Enter Elements of Vector 1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }

    vector<int> v2(n2);
    cout << "Enter Elements of Vector 2 : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }

    vector<int> ans1 = printUnionOfArray1(v1, v2);
    vector<int> ans2 = printUnionOfArray2(v1, v2);

    printVector(ans1);
    printVector(ans2);

    return 0;
}