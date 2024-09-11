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
    char c[] = "Hello Divesh";
    cout << "c : " << c << " : " << c[0] << endl;
    cout << "Address of C : " << &c << endl;

    //* Individual Characters
    char myArray[10] = {'d', 'i', 'v', 'e', 's', 'h'};
    cout << "My Array : " << myArray << endl;
    cout << "Array : " << (int)myArray[6] << endl;
    cout << "Array : " << (int)myArray[7] << endl;
    cout << "Array : " << (int)myArray[8] << endl;
    cout << "Array : " << (int)myArray[9] << endl;

    //* Null Character Issue
    char nCheck[5] = {'h', 'e', 'l', 'l', 'o'};
    cout << (int)nCheck[5] << endl; //* undefined Behaviour
    nCheck[5] = '\0';
    cout << (int)nCheck[5] << endl;
    cout << (int)nCheck[4] << endl;

    //* Accessing elements of Character
    char test[] = "Make Every Day as beautiful as you can!";
    int size = sizeof(test) / sizeof(test[0]);

    cout << "Size of Test : " << size << endl;

    for (int i = 0; i < size; i++)
        cout << "Index : " << i << " : " << test[i] << " " << (int)test[i] << " " << endl;

    cout << endl
         << endl;

    //* Can we Store Character Value in Int Array
    int integarArray[] = {'a', 'A', 'c', 'd', 'e', 'f'};
    size = sizeof(integarArray) / sizeof(integarArray[0]);

    cout << "Size of Integar Array : " << size << endl;

    for (int i = 0; i < size; i++)
        cout << "Index : " << i << " : " << integarArray[i] << " " << (int)integarArray[i] << " " << endl;

    cout << endl;

    //* can we store Int value in An Char Array
    char charArray[] = {65, 97, 99, 98, 66};
    size = sizeof(charArray) / sizeof(charArray[0]);

    cout << "Size of char Array : " << size << endl;

    for (int i = 0; i < size; i++)
        cout << "Index : " << i << " : " << charArray[i] << " " << (int)charArray[i] << " " << endl;

    cout<<endl<<endl;

    //* Properly Terminate the string
    char str[] = {'d', 'i', 'v', 'e', 's', 'h', ' ', 'j', 'a', 'd', 'h', 'a', 'v', '\0'};
    cout << "String: " << str << endl;

    //* Getline Function
    char mistake[100];
    cout<<"Enter Name : ";
    cin>>mistake;

    cout<<"Entered Text : "<<mistake<<endl;

    cout<<"Enter Again Using Getline : ";
    cin.getline(mistake,10);
    cout<<"Mistake Array : "<<mistake<<endl;

    //* we can't directly enter the \n newline character in getlinefunction
    mistake[5] = '\n';

    //* this will not work as we have to enter by using enter keyword
    cout<<"Mistake Array After : "<<mistake<<endl;

    //* Adding delimiter 
    char fruits[100];
    cout<<"Enter Fruits Getline : ";
    cin.getline(mistake,100,',');
    cout<<"Fruits Array : "<<mistake<<endl;

    return 0;
}