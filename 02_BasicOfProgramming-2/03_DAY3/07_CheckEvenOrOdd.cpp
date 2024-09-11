#include <iostream>
using namespace std;

bool printEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    bool check = printEvenOrOdd(num);
    if (check)
    {
        cout << num << " : Even Number." << endl;
    }
    else
    {
        cout << num << " : Odd Number." << endl;
    }

    return 0;
}