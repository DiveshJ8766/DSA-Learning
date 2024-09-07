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

int main()
{

    int number = 6000;
    vector<string> ans = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "\nDigits of " << number << " are : " << endl;

    sayDigits(number, ans);

    cout << endl
         << endl;

    return 0;
}