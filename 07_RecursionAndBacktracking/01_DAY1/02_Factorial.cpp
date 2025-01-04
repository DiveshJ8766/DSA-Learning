#include <iostream>
using namespace std;

int factorial(int n)
{
    cout << "Entering for n : " << n << endl;
    //* base

    if (n == 1)
    {
        return 1;
    }

    int ans = n * factorial(n - 1);
    cout << "\n\nEnding with ans : " << ans << endl;

    return ans;
}

int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int fact = factorial(n);

    cout << "\n\nfactorial of " << n << " : " << fact << endl;

    return 0;
}