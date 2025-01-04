#include <iostream>
using namespace std;

int fibonacciSeries(int n)
{
    //* Base case
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    //* Recursion Relation
    int ans = fibonacciSeries(n - 1) + fibonacciSeries(n - 2);

    //* Processing
    return ans;
}

int main()
{
    int n;
    cout << "Enter ith term : ";
    cin >> n;

    int ans = fibonacciSeries(n);
    cout << n << " term of fibonacci series : " << ans << endl;

    return 0;
}