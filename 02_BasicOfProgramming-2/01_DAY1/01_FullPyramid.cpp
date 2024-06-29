#include<iostream>
using namespace std;

void printFullPyramid(int n){
    //* For Number of Rows
    for(int i = 0;i < n; i++){
        //* For Spaces
        for(int j = 0;j <(n-i-1) ;j++){
            cout<<" ";
        }

        //* For Stars
        for(int k = 0; k <= i;k++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

int main() {
    int n ;
    cout<<"Enter Number : ";
    cin>>n;

    printFullPyramid(n);
    return 0;
}