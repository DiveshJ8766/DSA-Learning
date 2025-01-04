#include <iostream>
using namespace std;

//* Head Recursion
void printCounting(int n)
{
    //* Base case
    if (n == 0)
    {
        return;
    }

    //* Recursion Relation
    printCounting(n - 1);

    //* Processing
    cout << n << " ";
}

//* Tail Recursion
void printReverseCounting(int n)
{
    //* base case
    if (n == 0)
    {
        return;
    }

    //* Processing
    cout << n << " ";

    //* Recursion Relation
    printReverseCounting(n - 1);
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    cout << "Print Counting : ";
    printCounting(n);

    cout << endl
         << endl;

    cout << "Print Reverse Counting : ";
    printReverseCounting(n);

    cout << endl
         << endl;

    return 0;
}