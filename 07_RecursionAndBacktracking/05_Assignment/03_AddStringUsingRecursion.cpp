#include <bits/stdc++.h>
using namespace std;

//* add two string iterative
string addStringsIterative(string &num1, string &num2)
{
    //* calculate both lenghts to iterate over
    int length1 = num1.length() - 1;
    int length2 = num2.length() - 1;

    //* carry to store carry
    int carry = 0;

    //* ans strin to store final string
    string ans = "";

    while (length1 >= 0 || length2 >= 0 || carry != 0)
    {

        //* Pointer to point elements of both the Numbers
        //* to mark if any element is absent mark its position as Zero
        int pointer1 = (num1[length1] >= 0 ? num1[length1] : 0) - '0';
        int pointer2 = (num2[length2] >= 0 ? num2[length2] : 0) - '0';

        cout << "Pointer1 : " << pointer1 << " Pointer2 : " << pointer2 << endl;

        //* add both the numbers
        int sum = pointer1 + pointer2 + carry;

        cout << "Sum is : " << sum << endl;

        //* calculate the last digit
        int lastDigit = sum % 10;

        //* update the carry
        carry = sum / 10;

        cout << "Lastdigit : " << lastDigit << " carry : " << carry << endl;

        //* add the last digit to ans
        ans.push_back(lastDigit + '0');

        cout << "elements in ans : ";
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;

        length1--;
        length2--;
    }

    //* reverse the ans
    reverse(ans.begin(), ans.end());
    return ans;
}

//* add two string using recursion
string addStringsRecursive(string num1, int index1, string num2, int index2, string ans, int carry = 0)
{

    //* base case
    if(index1 < 0 && index2 < 0 && carry == 0){
        reverse(ans.begin(), ans.end());
        return ans;
    }

    //* one case
    int pointer1 = (num1[index1] >= 0 ? num1[index1] : 0) - '0';
    int pointer2 = (num2[index2] >= 0 ? num2[index2] : 0) - '0';

    cout << "Pointer1 : " << pointer1 << " Pointer2 : " << pointer2 << endl;

    int sum = pointer1 + pointer2 + carry;
    int lastDigit = sum % 10;
    carry = sum / 10;

    ans.push_back(lastDigit + '0');

    //* recursive relation
    return addStringsRecursive(num1, index1 - 1, num2, index2 - 1, ans, carry);
}

//* add two string using recursion pass by reference
void addStringsRecursive1(string &num1, int index1, string& num2, int index2, string &ans, int carry = 0)
{

    //* base case
    if(index1 < 0 && index2 < 0 && carry == 0){
        return;
    }

    //* one case
    int pointer1 = (num1[index1] >= 0 ? num1[index1] : 0) - '0';
    int pointer2 = (num2[index2] >= 0 ? num2[index2] : 0) - '0';

    cout << "Pointer1 : " << pointer1 << " Pointer2 : " << pointer2 << endl;

    int sum = pointer1 + pointer2 + carry;
    int lastDigit = sum % 10;
    carry = sum / 10;

    ans.push_back(lastDigit + '0');

    //* recursive relation
    addStringsRecursive1(num1, index1 - 1, num2, index2 - 1, ans, carry);
}

//* add two strings (self logic)
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

    string num1 = "7693";
    string num2 = "4078842";

    string ans1 = addStrings(num1, num2);
    cout << "Addition of Two Strings : " << ans1 << endl;

    string ans2 = addStringsIterative(num1, num2);
    cout << "Addition of Two Strings : " << ans2 << endl;

    cout<<endl<<endl;
    
    string ans3 = addStringsRecursive(num1, num1.length() - 1, num2, num2.length() - 1,"");
    cout<<"Addition of Two Strings recursively : "<<ans3<<endl;

    cout<<endl<<endl;

    string ans = "";
    addStringsRecursive1(num1, num1.length() - 1, num2, num2.length() - 1, ans);
    
    reverse(ans.begin(),ans.end());

    cout<<"Addition of Two Strings recursively pass by reference : "<<ans<<endl;
    cout<<endl<<endl;

    return 0;
}