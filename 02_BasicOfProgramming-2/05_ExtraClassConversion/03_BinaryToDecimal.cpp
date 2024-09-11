#include<iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binaryNumber){
    int decimalNumber = 0;
    int i = 0;

    while (binaryNumber  > 0)
    {
        int bit = binaryNumber % 10;
        decimalNumber = bit*pow(2,i++) + decimalNumber;
        binaryNumber /= 10;    
    }
    
    return decimalNumber;
}

int main() {
    int binaryNumber;
    cout<<"Enter Binary Number : ";
    cin>>binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);
    cout<<"Binary of "<<binaryNumber<<" : "<<decimalNumber<<endl;
    return 0;
}