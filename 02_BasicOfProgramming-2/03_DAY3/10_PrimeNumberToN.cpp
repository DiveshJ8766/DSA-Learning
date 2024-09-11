#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    cout << "Prime Number from 1 to " << num << " : " ;

    for (int i = 1; i <= num; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}