#include <iostream>
#include <math.h>
using namespace std;

int reverseNumber(int num)
{
    int reverse = 0;
    while (num != 0)
    {
        int digit = num %10;
        reverse = reverse *10 + digit;
        num/=10;
    }

    return reverse;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int reverse = reverseNumber(num);
    cout << "Reverse of " << num << " : " << reverse << endl;
    return 0;
}