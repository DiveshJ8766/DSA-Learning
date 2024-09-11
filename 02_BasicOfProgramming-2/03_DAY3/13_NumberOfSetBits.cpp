#include <iostream>
#include <math.h>
using namespace std;

int numberOfSetbits(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num & 1)
            count++;

        num >>= 1;
    }

    return count;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int count = numberOfSetbits(num);
    cout << "Total Number of set bits in " << num << " : " << count << endl;

    return 0;
}