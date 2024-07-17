#include<iostream>
#include<climits>
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

vector<int> printUnionOfArray(vector<int> v1, vector<int> v2)
{
    vector<int>ans;

    //* if first vector contains duplicate mark it
    for(int i =0;i < v1.size()-1;i++){
        for(int j =i+1;j < v1.size();j++){
            if(v1[i] == v1[j]){
                v1[j]= INT_MIN;
            }
        }
    }

    //* intersection
    for(int i =0;i < v1.size();i++){
        for(int j =0;j < v2.size();j++)
        {
            if(v1[i] != INT_MIN && v1[i] == v2[j]){
                v2[j] = INT_MIN;
                ans.push_back(v1[i]);
                break;
            }
        }
    }

    return ans;
}


int main() {
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

    vector<int> ans1 = printUnionOfArray(v1, v2);
    printVector(ans1);

    return 0;
}