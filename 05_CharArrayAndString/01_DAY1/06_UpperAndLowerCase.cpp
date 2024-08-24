#include<iostream>
#include <string.h>
using namespace std;

//* uppercase
void toUpperCase(char userName[]){
    int i =0;
    while(userName[i] != '\0'){
        if(userName[i] >= 'a' && userName[i] <= 'z'  && userName[i] != ' '){
            userName[i] = userName[i] - 'a' + 'A';
        }
        i++;
    }
}

//* lowercase
void toLowerCase(char userName[]){
    int i =0;
    while(userName[i] != '\0'){
        if(userName[i] >= 'A' && userName[i] <= 'Z' && userName[i] != ' '){
            userName[i] = userName[i] - 'A' + 'a';
        }
        i++;
    }
}
int main()
{
    char userName[100];
    cout << "Enter Name : ";
    cin.getline(userName, 100);

    cout<<"Name : "<<userName<<endl;

    char upperCase[100];
    strcpy(upperCase,userName);

    char lowerCase[100];
    strcpy(lowerCase,userName);

    toUpperCase(upperCase);
    cout<<"Upper Case : "<<upperCase<<endl;


    toLowerCase(lowerCase);
    cout<<"Lower Case : "<<lowerCase<<endl;

    return 0;
}