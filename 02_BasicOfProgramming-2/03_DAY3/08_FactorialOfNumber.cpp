#include <iostream>
using namespace std;

int printFactorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int fact = printFactorial(num);
    cout << "Factorial of " << num << " : " << fact << endl;

    return 0;
}