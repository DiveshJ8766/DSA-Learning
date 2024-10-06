#include <iostream>
using namespace std;

class Animal
{
};

class Person
{
public:
    string noOfHands;
};

class Fruit
{
public:
    string name;
};

class ComplexData
{
public:
    short x;
    double y;
    char ch;
};

class SameType
{
    int a;
    int b;
    char ch;
};

class ArrayData
{
    char name[10];
    float score;
};

class PointerData
{
    int *ptr;
    char value;
};

class BitFiledData
{
    unsigned int a : 3;
    unsigned int b : 5;
    unsigned int c : 10;
};

class outerClass
{
    PointerData p1;
    double c;
};

class Mixed
{
    float a;
    char b;
    double c;
    short d;
};

class Boolean
{
    bool flag;
    int value;
};

enum Color
{
    Red,
    Green,
    Pink
};

class EnumData
{
    Color color;
    float intensity;
};

int main()
{
    Animal A1;
    Animal *A2 = new Animal();

    cout << "Size of Empty Class : " << sizeof(Animal) << " byte." << endl;

    cout << "Size of Empty Object : " << sizeof(A1) << " byte." << endl;

    //* Printing the size of pointer and its depends on Architecture of the system
    cout << "Size of Empty Object using Heap : " << sizeof(A2) << " byte." << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;

    Person p1;
    Person *p2 = new Person();

    cout << "Size of Person class : " << sizeof(Person) << endl;
    cout << "Size of P1 Object : " << sizeof(p1) << endl;
    cout << "Size of p2 Object : " << sizeof(p2) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;

    cout << "Size of String : " << sizeof(string) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of complex Data : " << sizeof(ComplexData) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of SameType Data : " << sizeof(SameType) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of Array Data : " << sizeof(ArrayData) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of Pointer Data : " << sizeof(PointerData) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of BitField Data : " << sizeof(BitFiledData) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of Outer class Data : " << sizeof(outerClass) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of Mixed Data : " << sizeof(Mixed) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of Boolean Data : " << sizeof(Boolean) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;
    cout << "Size of Enum : " << sizeof(Color) << endl;
    cout << "Size of ENUM Data : " << sizeof(EnumData) << endl;

    cout << "\n---------------------------------------------------------\n"
         << endl;

    return 0;
}