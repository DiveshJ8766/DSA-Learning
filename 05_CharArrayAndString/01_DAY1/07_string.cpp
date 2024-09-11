#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str_name = "Today is a good day!";
    string str_name1("Hello Ji Updated the Text!");
    cout << "Quote : " << str_name << endl;
    cout << "Quote : " << str_name1 << endl;

    string str;
    cout << "Enter Name : ";
    //* To Get complete string
    getline(cin, str);
    cout << "Name : " << str << endl;

    char str2[] = "Hello Ji Kese ho saree";
    cout << "String 2 : " << str2 << endl;
    cout << "String null character : " << (int)str2[23] << endl;

    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << "String 3 : " << str3 << endl;
    cout << "String null character : " << (int)str3[5] << endl;

    //* PushBack
    string fruits = "Apple";
    cout << "Fruits : " << fruits;

    fruits.push_back(',');
    fruits.push_back('P');
    fruits.push_back('I');
    fruits.push_back('N');
    fruits.push_back('E');
    fruits.push_back('A');
    fruits.push_back('P');
    fruits.push_back('P');
    fruits.push_back('L');
    fruits.push_back('E');

    cout << "Fruits : " << fruits << endl;

    int index = fruits.find(',');
    cout << "Index : " << index << endl;

    //* Pop_back
    while (fruits.length() > index + 1)
    {
        fruits.pop_back();
    }

    cout << "Fruits : " << fruits << endl;

    //* checking difference between string and char array
    string checkNull = "d\0ni\0v\0\e\0s\0h\0";
    cout << "Null Character : " << checkNull << endl;

    char ch[] = {'d', '\0', 'i', '\0', 'v', '\0', 'e', '\0', 's', '\0', 'h', '\0'};
    cout << "Null Character : " << ch << endl;

    return 0;
}