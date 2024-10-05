#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal Class Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog Class Barking" << endl;
    }
};

int main()
{
    //* case 1
    Animal* a = new Animal();
    a->speak();

    //* case 2
    Dog* d = new Dog(); 
    d->speak();

    //* case 3 Upcasting
    Animal* a1 = new Dog();
    a1->speak();

    //* Case 4 Downcasting
    Dog* d1 =(Dog*) new Animal();
    d1->speak();

    //? By deafult pointers methods are called
    //? But if we want to call Runtime methods of the Object created we have to use virtual keyword

    return 0;
}