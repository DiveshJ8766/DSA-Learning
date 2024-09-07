#include <iostream>
using namespace std;

//* Factorial Program using recursion
long long int factorial(int n)
{
    //* Base case
    if (n == 1)
    {
        return 1;
    }

    //* Recursion Relation
    long long int ans = n * factorial(n - 1);

    //*  return ans
    return ans;
}

//* this is Tail Recursion
//* Print Reverse Counting
void printReverse(int n)
{
    //*  Base Case
    if (n == 0)
    {
        return;
    }

    //* Processing (optional)
    cout << n << " ";

    //* Recursive relation
    printReverse(n - 1);
}

//* this is head recursion
//* Print Counting
void printCounting(int n)
{
    //* base Case
    if (n == 0)
    {
        return;
    }

    //* Recursive Relation
    printCounting(n - 1);

    //* Processing
    cout << n << " ";
}

int main()
{
    long long int number;
    cout << "Enter Number : ";
    cin >> number;

    long long int fact = factorial(number);
    cout << "Factorial of " << number << " : " << fact << endl;

    cout << endl
         << endl;

    cout << "Reverse Printing : " << endl;
    printReverse(number);
    cout << endl;

    cout << endl
         << endl;

    cout << "Print counting : " << endl;
    printCounting(number);
    cout << endl;

    return 0;
}