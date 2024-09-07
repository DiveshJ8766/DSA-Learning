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

//* Exponential Power (optimized)
int exponentialPower(int a, int b)
{
    //* Base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    //* Recursive Call
    int ans = exponentialPower(a, (b / 2));

    //* If power is Even
    if (b % 2 == 0)
    {
        //* a^(b/2) * a^(b/2)
        return ans * ans;
    }
    //* If Power is Odd
    else
    {
        //* a * (a^(b/2) * a^(b/2))
        return a * (ans * ans);
    }
}

int exponentialPower1(int a, int b)
{
    //* Base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    


    //* Recursive Call
    int ans = a * exponentialPower(a,b-1);

     cout<<a<<" "<<b<<endl;
     
    return ans;
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

    cout << endl
         << endl;

    int a;
    cout << "Enter Value of A : ";
    cin >> a;

    int b;
    cout << "Enter Value of B : ";
    cin >> b;

    cout << "Exponential Power : " << exponentialPower1(a, b) << endl;

    cout << endl;

    return 0;
}