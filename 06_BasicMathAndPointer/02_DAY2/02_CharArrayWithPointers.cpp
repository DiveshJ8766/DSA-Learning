#include<iostream>
using namespace std;

int main(){
    int arr[10]={32,43,21,41,4,1,41,1,1,1};
    cout<<"Size of Array : "<<sizeof(arr)<<" Bytes"<<endl;

    int *ptr = arr;
    cout<<"Size of Pointer : "<<sizeof(ptr)<<" Bytes"<<endl;

    // arr = arr+1;
    cout<<"Address : "<<arr+1<<endl;
    cout<<"Address : "<<arr+2<<endl;
    cout<<"Address : "<<arr+3<<endl;

    //* Pointer
    int *p = arr;
    p = p+1;
    cout<<"Value of p : "<<p<<endl;
    p=p+1;
    cout<<"Value of p : "<<p<<endl;
    return 0;
}