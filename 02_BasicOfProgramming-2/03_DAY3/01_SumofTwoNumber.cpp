#include<iostream>
using namespace std;

int printSum(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main() {
    int num1;
    cout<<"Enter Number 1 : ";
    cin>> num1;

    int num2;
    cout<<"Enter Number 2 : ";
    cin>>num2;

    int sum = printSum(num1,num2);
    cout<<"Sum of "<<num1<<" and "<<num2<<" : "<<sum<<endl;
    return 0;
}