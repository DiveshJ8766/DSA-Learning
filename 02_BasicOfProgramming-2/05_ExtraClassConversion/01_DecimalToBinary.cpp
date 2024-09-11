#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int decimalNumber){
    int binaryNumber = 0;
    int i = 0;
    while(decimalNumber > 0){
        int bit = decimalNumber%2;
        binaryNumber = bit * pow(10,i++) +binaryNumber ;
        decimalNumber =decimalNumber/ 2;
        // i=10*i
    }

    return binaryNumber;
}

int main()
{
    int decimalNumber;
    cout << "Enter Decimal Number : ";
    cin >> decimalNumber;

    int binaryNumber = decimalToBinary(decimalNumber);
    cout << "Binary Number : " << binaryNumber;

    return 0;
}