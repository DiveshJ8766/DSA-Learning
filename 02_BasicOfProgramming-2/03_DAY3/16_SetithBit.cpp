#include <iostream>
using namespace std;

int setithBit(int num, int position)
{
    int mask = 1 << position;
    return (num | mask);
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int position;
    cout << "Enter Position : ";
    cin >> position;

    int result = setithBit(num, position);
    cout << "Result : " << result << endl;

    return 0;
}