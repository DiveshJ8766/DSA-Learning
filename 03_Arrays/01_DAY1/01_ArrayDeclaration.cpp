#include<iostream>
using namespace std;

int main() {
    //* Array Declaration
    int arr[10];

//* Address of Array
    cout<<"Address Of Array : "<<arr<<endl;
    cout<<"Address Of Array : "<<&arr<<endl;

    //* Homework
    int arr1[53];
    char ch[106];
    bool b[23];

    //* homework
    int integers[] = {1,2,3,4}; 
    char characters[10]={'a','b'};


    //* Initialisation of Array
    int demo[]={1,2,3,7,8};
    int b1[5]={1,83,92,21,03};
    int c1[10]={1,2,3,4,5};
    // int d[5]={1,2,3,4,5,5}; error

    //* Bad practice
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int marks[n];

    char characters1[]={'a','N','D'};

    //* Indexing And Accessing in Array
    int students[5]={110,20,30,40,50};

    cout<<"Student at zeroth index : "<<students[0]<<endl;
    cout<<"Student at fourth index : "<<students[4]<<endl;
    cout<<"Student at fourth index : "<<students[5]<<endl;



    return 0;
}