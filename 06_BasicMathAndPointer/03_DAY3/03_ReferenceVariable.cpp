#include<iostream>
using namespace std;

//* pass by reference
void counter(int &a){
    a = a + 1;
}

//* Pointer  With Reference
void counter2(int *&a){
    a = a+1;
}

int main(){

    int a = 5;
    int &b = a;
    int *c = &a;
    
    cout<<"Value of A : "<<a<<endl;
    cout<<"Value of B : "<<b<<endl;

    counter(a);

    cout<<"Value of A : "<<a<<endl;


    cout<<"Address of C : "<<c<<endl;

    counter2(c);

    cout<<"Address of C : "<<c<<endl;



    return 0;
}