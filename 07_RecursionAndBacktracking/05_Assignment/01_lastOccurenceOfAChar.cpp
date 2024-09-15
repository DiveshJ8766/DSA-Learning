#include <iostream>
using namespace std;

//* Last Occurence Left to Right Recursive
void lastOccurenceLTRRecursive(string &str, char &ch, int index, int &ans)
{
    //* Base case
    if (index >= str.length())
        return;

    //* if character matches store it in ans
    if (str[index] == ch)
    {
        ans = index;
    }

    //* make next call
    lastOccurenceLTRRecursive(str, ch, index + 1, ans);
}

//* return in Variable

int lastOccurenceLTRRecursive1(string &str, char &ch, int index)
{
    //* Base case
    if (index >= str.length())
        return -1;

    //* make next call
    int nextOccurence = lastOccurenceLTRRecursive1(str, ch, index + 1);

    //* if character matches store it in ans
    if (nextOccurence == -1 && str[index] == ch)
    {
        return index;
    }

    return nextOccurence;

}


//* Last Occurence Right to Left Recursive
void lastOccurenceRTLRecursive(string &str, char &ch, int index, int &ans)
{
    //* Base case
    if (index < 0)
        return;

    //* if character matches store it in ans
    if (str[index] == ch)
    {
        ans = index;
        return;
    }

    //* make next call
    lastOccurenceRTLRecursive(str, ch, index - 1, ans);
}

//* Return in varaible
int lastOccurenceRTLRecursive1(string &str, char &ch, int index)
{
    //* Base case
    if (index < 0)
        return -1;

    //* if character matches store it in ans
    if (str[index] == ch)
    {
       return index;
    }

    //* make next call
    return lastOccurenceRTLRecursive1(str, ch, index - 1);
}


//* iterative method from left to right
int lastOccurenceLTR(string &str, char &ch)
{

    int ans = -1;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
            ans = i;
    }

    return ans;
}

//* iterative method from right to left
int lastOccurenceRTL(string &str, char &ch)
{
    int ans = -1;
    for(int i = str.length();i >= 0 ;i--){
        if(str[i] == ch)
        {
            ans = i;
            return ans;
        }
    }

    return ans;
}

int main()
{

    string str = "abcddedgd";
    char ch = 'd';
    int index1 = 0;
    int index2 = str.length()-1;

    int ans1 = -1;
    int ans2 = -1;

    lastOccurenceLTRRecursive(str, ch, index1, ans1);
    cout << "Last Occurence LTR Recursive : " << ans1 << endl;

    lastOccurenceRTLRecursive(str, ch, index2, ans2);
    cout << "Last Occurence RTL Recursive : " << ans2 << endl;

    cout << "Last Occurence RTL Recursive by storing : " << lastOccurenceRTLRecursive1(str, ch, index2) << endl;

    cout << "Last Occurence LTR : " << lastOccurenceLTR(str, ch) << endl;
    cout << "Last Occurence RTL : " << lastOccurenceRTL(str, ch) << endl;


    return 0;
}