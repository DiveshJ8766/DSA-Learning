#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;

private:
    int noOfHands;
    int noOfLegs;

protected:
    string color;
    string sound;

    //* getters
    void getSound()
    {
        cout << " Sound : " << this->sound << endl;
    }

    void getName()
    {
        cout << "Name : " << this->name << endl;
    }

    void getNoOfHands()
    {
        cout << "Number of Hands : " << this->noOfHands << endl;
    }

    void getNoOfLegs()
    {
        cout << "Number of Legs : " << this->noOfLegs << endl;
    }

    void getColor()
    {
        cout << "Color : " << this->color << endl;
    }

    void getAll()
    {
        cout << "Sound : " << this->sound << endl;
        cout << "Color : " << this->color << endl;
        cout << "Name : " << this->name << endl;
        cout << "Number of Hands : " << this->noOfHands << endl;
        cout << "Number of Legs : " << this->noOfLegs << endl;
    }

    //* setters
    void setSound(string sound)
    {
        this->sound = sound;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setNoOfHands(int hands)
    {
        this->noOfHands = hands;
    }

    void setNoOfLegs(int legs)
    {
        this->noOfLegs = legs;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    void setAll(string sound, string name, int hands, int legs, string color)
    {
        this->sound = sound;
        this->name = name;
        this->noOfHands = hands;
        this->noOfLegs = legs;
        this->color = color;
    }
};

class Dog : public Animal
{
public:
    string location;

    // * Protected
    void setHands(int hands)
    {
        this->setNoOfHands(hands);
    }

    void getNoOfHands()
    {
        //* Diamond Problem
        Animal::getNoOfHands();
    }
};

class Cat
{
public:
    string location;
};

int main()
{
    // Animal a;
    Dog d;
    Cat c;

    cout << "Size of String : " << sizeof(string) << endl;

    cout << "Size of Parent Class : " << sizeof(Animal) << endl;
    cout << "Size of Child Class Dog : " << sizeof(Dog) << endl;
    cout << "Size of Child Class Cat : " << sizeof(Cat) << endl;

    cout << "Size of Dog d object : " << sizeof(d) << endl;
    cout << "Size of Cat c object : " << sizeof(c) << endl;

    //* Protected
    d.setHands(4);
    d.getNoOfHands();

    return 0;
}