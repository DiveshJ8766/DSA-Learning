#include <bits/stdc++.h>
using namespace std;

string addStrings(string &num1, string &num2)
{
    //* calculate both lengths
    int l1 = num1.length();
    int l2 = num2.length();

    //* Find Minimum length to add number of zeros to smallest number
    int miniLength = min(l1, l2);

    //* if l2 is smallest
    if (l1 > l2)
    {
        for (int i = 0; i < (l1 - miniLength); i++)
        {
            //* add 0 at the starting
            num2.insert(0, 1, '0');
        }
    }

    //* if l1 is smallest
    else if (l2 > l1)
    {
        for (int i = 0; i < (l2 - miniLength); i++)
        {
            //* add 0 at the starting
            num1.insert(0, 1, '0');
        }
    }

    string ans = "";

    int carry = 0;

    //* update the lenght as we have added zeros
    l1 = num1.length();
    l2 = num2.length();

    for (int i = l1 - 1; i >= 0; i--)
    {
        //* converting to int
        int n1 = num1[i] - '0';
        int n2 = num2[i] - '0';

        //* get sum of both integers
        int sum = n1 + n2;

        if (carry)
        {
            //* if there is carry add it and make it as zero
            sum += carry;
            carry = 0;
        }

        if (sum > 9)
        {
            //* last digit to add to sum
            int lastDigit = sum % 10;

            //* carry to forward
            carry = sum / 10;

            //* update ans
            ans.push_back(lastDigit + '0');
        }
        else
        {
            //* push to ans
            ans.push_back(sum + '0');
        }
    }

    //* if only one lenght element and we still have carry add it
    if (carry)
    {
        ans.push_back(carry + '0');
    }

    //* as ans is reverse it
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    string num1 = "199";
    string num2 = "11";

    string ans = addStrings(num1, num2);

    cout << ans << endl;

    return 0;
}