#include <iostream>
using namespace std;

//* Using Recursion
string removeAdjacentCharacter(string str)
{
    int size = str.length();
    for (int i = 0; i < size - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            str = str.erase(i, 2);
            return removeAdjacentCharacter(str);
        }
    }

    return str;
}

//* using While loop
string removeDuplicates(string s)
{
    string ans = "";
    int size = s.length();
    int i = 0;

    while (s[i] != '\0')
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }

        i++;
    }

    return ans;
}

int main()
{

    string str = "abbaca";
    cout << "Original String : " << str << endl;
    cout << "After Removing : " << removeAdjacentCharacter(str) << endl;

    return 0;
}