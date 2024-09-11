#include <iostream>
using namespace std;

//* using temp variable
void method1(int num1, int num2)
{
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
}

//* using addition and subtraction
void method2(int num1, int num2)
{
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
}

//* using Multiplication and Division
//! If any one number is zero it will fail
void method3(int num1, int num2)
{
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
}

//* using XOR
void method4(int num1, int num2)
{
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
}

//* using Swap Method
void method5(int num1, int num2)
{
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
    swap(num1, num2);
    cout << "Value 1 : " << num1 << " Value 2 : " << num2 << endl;
}

int main()
{
    int num1;
    cout << "Enter Number 1 : ";
    cin >> num1;

    int num2;
    cout << "Enter Number 2 : ";
    cin >> num2;

    cout << "Method 1 : " << endl;
    method1(num1, num2);
    cout << endl
         << endl;

    cout << "Method 2 : " << endl;
    method2(num1, num2);
    cout << endl
         << endl;

    cout << "Method 3 : " << endl;
    method3(num1, num2);
    cout << endl
         << endl;

    cout << "Method 4 : " << endl;
    method4(num1, num2);
    cout << endl
         << endl;

    cout << "Method 5 : " << endl;
    method5(num1, num2);
    cout << endl
         << endl;

    return 0;
}