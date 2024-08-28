#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 5;

    cout<<"Address Of A : "<<&a<<endl;
    cout<<"Address Of B : "<<&b<<endl;

    //* Pointer Creation
    int *ptr = &a;
    cout<<"Address of A :"<<ptr<<endl;
    cout<<"Value of Pointer : "<<*ptr<<endl;
    cout<<"Address of Ptr : "<<&ptr<<endl;

    //* size of Pointer 
    int integerData = 5;
    int *ptrInt = &integerData;
    cout<<"Size of Interger Pointer : "<<sizeof(ptrInt)<<" Bytes"<<endl;

    char charData = 'a';
    char *ptrChar = &charData;
    cout<<"Size of Character Pointer : "<<sizeof(ptrChar)<<" Bytes"<<endl;

    float floatData = 53.31;
    float *ptrFloat = &floatData;
    cout<<"Size of Float Pointer : "<<sizeof(ptrFloat)<<" Bytes"<<endl;

    double doubleData = 5;
    double *ptrDouble = &doubleData;
    cout<<"Size of Double Pointer : "<<sizeof(ptrDouble)<<" Bytes"<<endl;

    //* Bad Practice
    // int *ptrBad ;
    // cout<<"Value of Bad Pointer : "<<*ptrBad<<endl;

    //* good practice
    // int *ptrGood = NULL;
    // cout<<"Value of Good Pointer : "<<*ptrGood<<endl;

    //* one more good practice
    // int *ptrGood2 = 0;
    // cout<<"Value of Good Pointer : "<<*ptrGood2<<endl;

    //* one more good practice
    // int *ptrGood3 = nullptr;
    // cout<<"Value of Good Pointer : "<<*ptrGood3<<endl;

    //* Copy of Pointer
    int test = 23;
    int *ptrCopy = &test;
    int *ptrCopy2 = ptrCopy;

    cout<<"Value of Copy Pointer : "<<*ptrCopy<<endl;
    cout<<"Value of Copy Pointer : "<<*ptrCopy2<<endl;

    //* pointer Arithmetic
    int arr[5] = {1,2,3,4,5};
    int *ptrArr = arr;
    cout<<"Value of Pointer : "<<*ptrArr<<endl;
    cout<<"Value of Pointer : "<<*(ptrArr+1)<<endl;
    cout<<"Value of Pointer : "<<*(ptrArr+2)<<endl;
    cout<<"Value of Pointer : "<<*(ptrArr+3)<<endl;
    cout<<"Value of Pointer : "<<*(ptrArr+4)<<endl;

    //* Question
    int test2 = 10;
    int *testPtr = &test2;
    int *testPtr2 = testPtr;
    int *testPtr3 = testPtr2;

    cout<<"value of test : "<<test2<<endl;
    cout<<"Address of test : "<<&test2<<endl;

    cout<<"Value of Pointer : "<<testPtr<<endl;
    cout<<"Address of Pointer : "<<&testPtr<<endl;
    cout<<"Value of Pointer : "<<*testPtr<<endl;

    cout<<"Value of Pointer : "<<testPtr2<<endl;
    cout<<"Address of Pointer : "<<&testPtr2<<endl;
    cout<<"Value of Pointer : "<<*testPtr2<<endl;
    
    cout<<"Value of Pointer : "<<testPtr3<<endl;
    cout<<"Address of Pointer : "<<&testPtr3<<endl;
    cout<<"Value of Pointer : "<<*testPtr3<<endl;

    cout<<"Value of pointer : "<<(*testPtr + *testPtr2 + *testPtr3)<<endl;
    cout<<"Value of pointer : "<<(*testPtr2)*2 + (*testPtr3)*3<<endl;
    cout<<"Value of pointer : "<<(*testPtr2/2) - (*testPtr3)/2<<endl;


    return 0;
}