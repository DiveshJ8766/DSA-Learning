#include <iostream>
#include <vector>
using namespace std;

//* Approach 1
vector<string> getAllSubstrings(string str)
{
    vector<string> ans;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            string sub = str.substr(i, j - i + 1);
            ans.push_back(sub);
        }
    }

    return ans;
}

bool checkPalindrome(string s)
{
    if (s.length() == 1)
    {
        return true;
    }

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

//* Approach 2
int getAllSubstringsCount(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        int oddKaAns = expandAroundIndex(str, i, i);
        count += oddKaAns;
        int evenKaAns = expandAroundIndex(str, i, i + 1);
        count += evenKaAns;
    }

    return count;
}

int expandAroundIndex(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int main()
{

    string str = "aaa";

    int count = 0;

    vector<string> substring = getAllSubstrings(str);
    for (int i = 0; i < substring.size(); i++)
    {
        if (checkPalindrome(substring[i]))
        {
            count++;
        }
    }

    cout << "Count : " << count << endl;

    cout << "Count : " << getAllSubstringsCount(str) << endl;

    return 0;
}