#include <iostream>
#include <vector>
using namespace std;

void sayDigits(int number, vector<string> &ans)
{
    //* Base Case
    if (number == 0)
    {
        return;
    }

    //* Recursive Call
    sayDigits(number / 10, ans);

    //* Processing
    int lastDigit = number % 10;
    cout << ans[lastDigit] << " ";
}

//* Reverse Say Digits (Tail Recursion)
void sayDigitsReverse(int n, vector<string> &ans)
{
    //* base case
    if (n == 0)
    {
        return;
    }

    //* Processing
    int lastdigit = n % 10;
    cout << ans[lastdigit] << " ";

    //* Recursion Relation
    return sayDigitsReverse(n / 10, ans);
}

int main()
{

    int number;
    cout << "Enter Number : ";
    cin >> number;

    vector<string> ans = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "\nDigits of " << number << " are : " << endl;

    sayDigits(number, ans);

    cout << endl
         << endl;

    sayDigitsReverse(number, ans);

    cout << endl
         << endl;

    return 0;
}