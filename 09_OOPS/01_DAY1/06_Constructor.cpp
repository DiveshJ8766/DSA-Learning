#include <iostream>
using namespace std;

class Animal{
    public:
    //* Default Constructor
    Animal(){
        cout<<"Animal Class Constructor Called!!!"<<endl;
    }
    

    //* Parameterised Constructor
    Animal(string name){
        this->name = name;
        cout<<"By Default Value : "<<this->name<<endl;
    }

    Animal(string name,int weigth){
        this->name = name;
        this->weigth = weigth;
        cout<<"By default Name : "<<this->name<<" and weight : "<<this->weigth<<endl;
    }

    string name;
    int weigth;

    void getName(){
        cout<<"Name : "<<this->name<<endl;
    }

    void setName(string name){
        this->name = name;
    }
};



int main(){

    Animal a1();

    Animal a2("Cow");

    Animal *a = new Animal("Cow",24);
    // a->setName("DOG");
    // a->getName();

    return 0;
}