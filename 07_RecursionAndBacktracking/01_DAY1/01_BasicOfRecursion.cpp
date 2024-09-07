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

int main()
{
    long long int number;
    cout << "Enter Number : ";
    cin >> number;

    long long int fact = factorial(number);
    cout << "Factorial of " << number << " : " << fact << endl;

    return 0;
}