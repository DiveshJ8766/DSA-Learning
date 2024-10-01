#include <iostream>
using namespace std;

class Animal
{
    int age;          //* 4 byte
    int numberOfEyes; //* 4 byte
    char character;   //* 1 byte
};

class Person
{
    //* Access Modifiers
public:
    string name;
    int age;
    char gender;

    //* behvaiour/methods
    void reading()
    {
        cout << "Person can Reading!!" << endl;
    }

    void sleeping()
    {
        cout << "Person can Sleep!!" << endl;
    }
};

int main()
{
    Person p1;
    p1.age = 24;
    p1.gender = 'M';
    p1.name = "John";
    p1.reading();
    p1.sleeping();
    cout << "size of empty class is " << sizeof(Animal) << " bytes" << endl;
    cout << "Age of a Person is " << p1.age << endl;
    cout << "Name of a person is " << p1.name << endl;
    cout << "Gender of a person is " << p1.gender << endl;

    cout << "\n\n\n\n"
         << endl;
}
