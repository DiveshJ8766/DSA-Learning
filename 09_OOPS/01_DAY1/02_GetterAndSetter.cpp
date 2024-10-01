#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;

public:
    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }

    void setGender(char g)
    {
        gender = g;
    }

    char getGender()
    {
        return gender;
    }
};

int main()
{

    Person p1;
    p1.setName("John");
    cout << "Name of the person is " << p1.getName() << endl;

    p1.setAge(24);
    cout << "Age of the person is " << p1.getAge() << endl;

    p1.setGender('M');
    cout << "Gender of the person is " << p1.getGender() << endl;

    cout<<"\n\n\n\n"<<endl;

    return 0;
}