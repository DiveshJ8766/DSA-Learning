#include <iostream>
using namespace std;

void printDigit(int num)
{
    if (num == 0)
    {
        cout << "0" << endl;
        return;
    }

    if (num < 0)
    {
        cout << "-"<<" ";
        num = -num;
    }

    int arr[1000];
    int i = 0;
    while (num != 0)
    {
        int digit = num % 10;
        arr[i] = digit;
        i++;
        num /= 10;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    cout << "Digits in " << num << " : ";
    printDigit(num);

    return 0;
}