#include <iostream>
using namespace std;

//? Heriarical inheritance (one base class and multiple derived class)

//* parent class
class Animal
{
public:
    //* Here Only signature of function is declared
    void speak()
    {
    }
};

//* child class 1
class Dog : public Animal
{
public:
    //* function Override
    void speak()
    {
        cout << "Barking" << endl;
    }
};

//* child class 2
class Cat : public Animal
{
public:
    //* function Override
    void speak()
    {
        cout << "Meow" << endl;
    }
};

//* child class 3
class Cow : public Animal
{
public:
    //* function Override
    void speak()
    {
        cout << "Moo" << endl;
    }
};

int main()
{
    //* Animal class Speak Function
    Animal a;
    a.speak();

    //* Dog class Speak Function
    Dog d;
    d.speak();

    //* Cat class Speak Function
    Cat c;
    c.speak();

    //* Cow class Speak Function
    Cow w;
    w.speak();

    return 0;
}