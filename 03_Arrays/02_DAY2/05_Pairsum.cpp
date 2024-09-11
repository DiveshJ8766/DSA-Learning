#include<iostream>
#include<vector>
using namespace std;

void printPairSum(vector<int> v1,vector<int>v2,int sum){

    if(v1.size() <= 0 || v2.size() <= 0){
        return;
    }
    cout<<"Pairs Are : "<<endl;
    for(int i =0;i<v1.size();i++){
        for(int j =0;j< v2.size();j++){
            if(v1[i] + v2[j] == sum){
                cout<<"v1 : "<<v1[i]<<" and "<<"v2 : "<<v2[j]<<endl;
            }
        }
    }
}

void printPairSum1(vector<int> v1,int sum){

    if(v1.size() <= 0){
        return;
    }
    cout<<"Pairs Are : "<<endl;
    for(int i =0;i<v1.size();i++){
        for(int j =i+1;j< v1.size();j++){
            if(v1[i] + v1[j] == sum){
                cout<<"num1 : "<<v1[i]<<" and "<<"num2 : "<<v1[j]<<endl;
            }
        }
    }
}

int main() {
    int n1;
    cout << "Enter Size of Vector 1 : ";
    cin >> n1;

    int n2;
    cout << "Enter Size of Vector 2 : ";
    cin >> n2;

    int sum;
    cout<<"Enter Sum : ";
    cin>>sum;

    vector<int> v1(n1);
    cout << "Enter Elements of Vector 1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }

    vector<int> v2(n2);
    cout << "Enter Elements of Vector 2 : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }

    printPairSum(v1, v2,sum);
    printPairSum1(v1,sum);
    return 0;
}