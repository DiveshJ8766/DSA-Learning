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

//* print ith index Element of Fibonacci series
int printithElement(int index)
{

    //* base case
    if (index == 0 || index == 1)
    {
        return index;
    }

    //* Recursion relation
    int ithTerm = printithElement(index - 1) + printithElement(index - 2);

    //* Return ans
    return ithTerm;
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

    cout << endl
         << endl;

    cout << "Print ith Index of Fibonacci Series : " << endl;
    int element = printithElement(number);
    cout << number << " th index Element : " << element << endl;

    cout << endl;

    return 0;
}