#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    cout<<"Array Elements : ";
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }

    cout<<endl;

    cout<<"Address of Arr : "<<arr<<endl;
    cout<<"Address of Arr : "<<&arr<<endl;
    cout<<"Address of Arr : "<<&arr[0]<<endl;
    cout<<"Address of Arr : "<<&0[arr]<<endl;

    cout<<"Value of Arr : "<<*arr<<endl;
    cout<<"Value of Arr : "<<*(arr + 0)<<endl;
    cout<<"Value of Arr : "<<arr[0]<<endl;
    cout<<"Value of Arr : "<<*(arr + 1)<<endl;
    cout<<"Value of Arr : "<<arr[1]<<endl;
    cout<<"Value of Arr : "<<*(arr + 2)<<endl;
    cout<<"Value of Arr : "<<arr[2]<<endl;
    cout<<"Value of Arr : "<<*(arr + 3)<<endl;
    cout<<"Value of Arr : "<<arr[3]<<endl;
    cout<<"Value of Arr : "<<*(arr + 4)<<endl;
    cout<<"Value of Arr : "<<arr[4]<<endl;

    //* Magic Syntax
    cout<<arr[0]<<endl;
    cout<<*(arr+0)<<endl;
    cout<<0[arr]<<endl;
    cout<<*(0+arr)<<endl;




    return 0;
}