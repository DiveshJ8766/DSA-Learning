#include<iostream>
using namespace std;


int printMaxOfThree(int num1,int num2 ,int num3){

    if(num1 == num2 && num2 == num3){
        return num1;
    }
    
    if(num1 > num2 && num1 > num3){
        return num1;
    }else if(num2 > num3&& num2 > num1){
        return num2;
    }else{
        return num3;
    }
}

int main() {
    int num1;
    cout<<"Enter Number 1 : ";
    cin>>num1;

    int num2;
    cout<<"Enter Number 2 : ";
    cin>>num2;

    int num3;
    cout<<"Enter Number 3 : ";
    cin>>num3;

    int max = printMaxOfThree(num1,num2,num3);
    cout<<"Maximum of "<<num1<<" , "<<num2<<" , "<<num3<<" : "<<max<<endl;

    return 0;
}