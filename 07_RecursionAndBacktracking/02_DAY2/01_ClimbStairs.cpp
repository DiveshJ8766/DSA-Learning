#include <iostream>
using namespace std;

//* Climb Stairs
// int climbStaris(int n)
// {
//     //* Base case
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     //* Recursive Relation
//     int ans = climbStaris(n - 1) + climbStaris(n - 2);

//     return ans;
// }

int climbStaris(int n)
{
    //* Base case
    if (n == 1)
    {
        return 1;
    }

    if (n == 2)
    {
        return 2;
    }

    //* recursion relation
    int ans = climbStaris(n - 1) + climbStaris(n - 2);

    //* processing
    return ans;
}

int main()
{

    int n;
    cout << "Enter Stair Number : ";
    cin >> n;

    int ans = climbStaris(n);
    cout << "Number of ways to Climb Stairs : " << ans << endl;

    return 0;
}