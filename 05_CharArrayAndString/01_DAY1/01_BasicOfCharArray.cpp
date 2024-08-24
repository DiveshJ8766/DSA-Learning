#include <iostream>
using namespace std;

int main()
{

    //* Fixed Size Array
    char name[10];
    cout << "Enter Your Name : ";
    cin >> name;

    cout << "Entered Name : " << name << endl;
    cout << "Null Character : " << (int)name[6] << endl; //* ASCII Value of Null Character

    //* Initialize with string literals
    char ch[10] = "Hello";

    //* Without size
    char c[]="Hello Divesh";
    cout<<"c : "<<c<<" : "<<c[0]<<endl;
    cout<<"Address of C : "<<&c<<endl;

    //* Individual Characters
    char myArray[10] = {'d','i','v','e','s','h'};
    cout<<"My Array : "<<myArray<<endl;
    cout<<"Array : "<<(int)myArray[6]<<endl;
    cout<<"Array : "<<(int)myArray[7]<<endl;
    cout<<"Array : "<<(int)myArray[8]<<endl;
    cout<<"Array : "<<(int)myArray[9]<<endl;

    //* Null Character Issue
    char nCheck[5] = {'h','e','l','l','o'};
    cout<<(int)nCheck[5]<<endl;//* undefined Behaviour
    nCheck[5] = '\0';
    cout<<(int)nCheck[5]<<endl;
    cout<<(int)nCheck[4]<<endl;


    return 0;
}