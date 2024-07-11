#include<iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binaryNumber){
    int decimalNumber = 0;
    int i = 1;

    while (binaryNumber > 0)
    {
        int bit = binaryNumber & 1;
        decimalNumber = (bit*i) + decimalNumber;
        binaryNumber = binaryNumber /10;
        i = i*2;
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