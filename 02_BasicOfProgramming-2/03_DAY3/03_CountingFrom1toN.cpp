#include<iostream>
using namespace std;

void printCounting(int num){
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
    }
}

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;

    cout<<"Counting From 1 to "<<num<<" : ";
    printCounting(num);

    return 0;
}