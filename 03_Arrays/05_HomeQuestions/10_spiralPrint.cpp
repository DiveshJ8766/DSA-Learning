#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> v)
{
    cout << "Elements of Vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void printArray(vector<int> v)
{
    cout << "Elements : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

vector<int> spiralPrint(vector<vector<int>> matrix)
{
    int top = 0;
    int left = 0;
    int right = matrix[0].size() - 1;
    int bottom = matrix.size() - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        //* left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        //* top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        //* right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        //* bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

vector<int> reverseSpiralPrint(vector<vector<int>> matrix)
{
    int top = 0;
    int left = 0;
    int right = matrix[0].size() - 1;
    int bottom = matrix.size() - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        //* left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        //* top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        //* right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        //* bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
}


int main()
{
    vector<vector<int>> v;
    int row;
    cout << "Enter Number of Rows : ";
    cin >> row;

    v.resize(row);

    for (int i = 0; i < row; i++)
    {
        int col;
        cout << "Enter Number of Columns for Row " << i << " ";
        cin >> col;

        v[i].resize(col);

        for (int j = 0; j < col; j++)
        {
            int element;
            cout << "Enter Element for i = " << i << " j = " << j << " ";
            cin >> element;

            v[i][j] = element;
        }
    }

    cout << endl
         << endl;
    printVector(v);
    cout << endl
         << endl;
    cout << "Spiral Print : " << endl;
    vector<int> ans = spiralPrint(v);
    printArray(ans);

    vector<int> ans1 = reverseSpiralPrint(v);
    printArray(ans1);

    return 0;
}