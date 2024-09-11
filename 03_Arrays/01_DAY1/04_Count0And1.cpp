#include<iostream>
using namespace std;

void count0and1(int arr[],int size){
    int count0 = 0;
    int count1= 0;

    for(int index=0;index<size;index++){
        if(arr[index] == 0){
            count0++;
        }

        if(arr[index]==1){
            count1++;
        }
    }

    cout<<"Count of Zero : "<<count0<<endl;
    cout<<"Count of One : "<<count1<<endl;

}

void count0and1Method(int arr[],int size){
    int count0 = 0;
    
    for(int index=0;index<size;index++){
        if(arr[index] == 0){
            count0++;
        }
    }

    cout<<"Count of Zero : "<<count0<<endl;
    cout<<"Count of One : "<<(size - count0)<<endl;

}

int main() {
    int arr[]={1,1,0,0,0,0,12,1,3,1,2,1,1,1,0,0,0,0,1};
    int size = 21;
    count0and1(arr,size);

    //* if only 1 and zeros are present
    int brr[]={1,0,1,0,1,0,1,1,1,0,0,0,0,1,1};
    int size1 = 15;
    count0and1Method(brr,size1);

    return 0;
}