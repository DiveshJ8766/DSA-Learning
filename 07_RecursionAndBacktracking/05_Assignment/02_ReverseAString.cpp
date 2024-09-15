#include <iostream>
using namespace std;

//* Using Recursion
void reverseString(string &str, int start, int end)
{
    //* Base case
    if (start > end)
        return;

    //* ek case solve karo
    swap(str[start], str[end]);

    //* recursive call
    reverseString(str, start + 1, end - 1);
}

//* using Iterative Method
string reverseStringIterative(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start >= end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    return str;
}

int main()
{

    string str = "divesh jadhav";
    int start = 0;
    int end = str.length() - 1;

    //* Using Recursion
    reverseString(str, start, end);
    cout << "Reverse of a String : " << str << endl;

    //* using Iterative Method
    string ans = reverseStringIterative(str);
    cout << "Reverse of a String : " << ans << endl;

    return 0;
}