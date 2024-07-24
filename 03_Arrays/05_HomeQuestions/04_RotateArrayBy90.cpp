#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateBy90(vector<vector<int>> v)
{
    int n = v.size();
    int j = v[0].size();
    vector<vector<int>> temp(j, vector<int>(n));

    for (int i = v.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < v[n - i - 1].size(); j++)
        {
            temp[j][n - i - 1] = v[i][j];
        }
    }

    printArray(temp);
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 4},{11,23,42}};
    cout << "Before Print : " << endl;
    printArray(v);
    cout << "After Print : " << endl;
    rotateBy90(v);

    return 0;
}