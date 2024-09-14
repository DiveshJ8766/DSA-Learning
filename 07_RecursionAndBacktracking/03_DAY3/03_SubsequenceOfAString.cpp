#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<string> arr){
    cout<<"Elements of Array : "<<endl;
    for(int i =0;i < arr.size();i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

//* using for loop
void printSubsequence(string str, vector<string> &ans)
{
    ans.push_back("");

    for (int i = 0; i < str.length(); i++)
    {
        int n = ans.size();

        for (int j = 0; j < n; j++)
        {
            ans.push_back( ans[j] +str[i]);
        }
    }
}

int main()
{

    string str = "abc";
    vector<string> ans;

    printSubsequence(str, ans);

    printVector(ans);

    return 0;
}