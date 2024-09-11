#include <iostream>
#include<cstring>
using namespace std;

//* Using For Loop
int getlength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

//* using While loop
int getlength2(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

//* we can optimize while loop code
int getlength3(char name[]){
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{

    char userName[50];
    cout << "Enter User Name : ";
    // cin >> userName;
    cin.getline(userName, 50);

    cout << endl;

    cout << "Length of Character Array : " << getlength(userName) << endl;
    cout << "Length of Character Array 2 : " << getlength2(userName) << endl;
    cout << "Length of Character Array 3 : " << getlength3(userName) << endl;

    //* Builtin Function for Lenght;
    int lenght = strlen(userName);
    cout<<"lenght of Username : "<<lenght<<endl;


    return 0;
}