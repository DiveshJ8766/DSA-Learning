#include <iostream>
using namespace std;

int powerOf2(int n)
{
    //* Base case
    if (n == 0)
        return 1;

    //* Recurison relation
    int ans = 2 * powerOf2(n - 1);

    //* Processing
    return ans;
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int ans = powerOf2(n);
    cout << "Power of 2 with " << n << " : " << ans << endl;

    return 0;
}