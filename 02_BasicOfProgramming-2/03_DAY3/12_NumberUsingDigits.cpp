#include <iostream>
using namespace std;

void createNumber(int num) {
    
}

int main()
{
    int numberOfDigits;
    cout << "Enter Number of Digits you want to Enter : ";
    cin >> numberOfDigits;

    for (int i = 0; i < numberOfDigits; i++)
    {
        createNumber(i);
    }

    return 0;
}