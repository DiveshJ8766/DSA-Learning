#include<iostream>
#include<vector>
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

void spiralPrint(vector<vector<int>>v){
    vector<vector<int>>temp;
}

int main() {
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 4}};
    cout << "Before Print : " << endl;
    printArray(v);
    cout << "After Print : " << endl;
    spiralPrint(v);
    return 0;
}