#include<iostream>
using namespace std;

bool linearCheck(int arr[],int size,int key){
    for(int i =0;i < size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[100];
    int size;
    cout<<"Enter number of Elements : ";
    cin>>size;

    cout<<"Enter Elements of an Array : ";
    for(int i =0;i < size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter Key to Search : ";
    cin>>key;

    bool check = linearCheck(arr,size,key);
    if(check)
        cout<<key<<" : Present in Array"<<endl;
    else
        cout<<key<<" : Not Present in Array"<<endl;

    return 0;
}