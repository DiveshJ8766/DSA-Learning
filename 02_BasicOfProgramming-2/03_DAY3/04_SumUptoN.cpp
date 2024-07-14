#include <iostream>
using namespace std;

int printCounting(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int sum = printCounting(num);
    cout << "Sum : " << sum << endl;

    return 0;
}