#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<string> arr)
{
    cout << "Elements of Array : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

//* using recursion and bitmasking
void printSubsequence3(string str)
{

    vector<string> ans;

    //* total number of subsequence possible
    int n = 1 << str.length();

    //* for every mask from 0 to n
    for (int mask = 0; mask < n; mask++)
    {
        string output = "";
        for (int i = 0; i < str.length(); i++)
        {
            if (mask & (1 << i))
            {
                output.push_back(str[i]);
            }
        }

        ans.push_back(output);
    }

    cout << "Bit masking elements : " << endl;
    for (auto val : ans)
    {
        cout << val << endl;
    }

    cout << "\nSize of ans : " << ans.size() << endl;
}

//* using recursion and store ans in vector
void printSubsequence2(string str, string output, int index, vector<string> &ans)
{

    //* base case
    if (index >= str.length())
    {
        ans.push_back(output);
        return;
    }

    //* Include call
    output.push_back(str[index]);
    printSubsequence2(str, output, index + 1, ans);
    output.pop_back();

    //* Exclude call
    printSubsequence2(str, output, index + 1, ans);
}

//* Using Recursion
void printSubsequence1(string str, string output, int index)
{

    //* base case
    if (index >= str.length())
    {
        cout << output << " ";
        return;
    }

    //* Exclude Call
    printSubsequence1(str, output, index + 1);

    //* Include Call
    output.push_back(str[index]);
    printSubsequence1(str, output, index + 1);
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
            ans.push_back(ans[j] + str[i]);
        }
    }
}

int main()
{

    string str = "abc";
    vector<string> ans;
    vector<string> ans1;

    printSubsequence(str, ans);

    printVector(ans);

    cout << "\nSubsequence Elements : \n";
    printSubsequence1(str, "", 0);
    cout << "\n\n"
         << endl;

    printSubsequence2(str, "", 0, ans1);

    cout << "\nSubsequence Elements : \n";
    for (auto val : ans1)
    {
        cout << val << endl;
    }
    cout << endl;

    cout << "size of ans : " << ans.size() << endl;

    printSubsequence3(str);

    return 0;
}