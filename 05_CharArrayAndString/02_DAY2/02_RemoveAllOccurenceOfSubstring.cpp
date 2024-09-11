#include<iostream>
using namespace std;

//* Using Find and Erase
string remove(string mainStr, string subStr){
    int pos = mainStr.find(subStr);

    while(pos != string::npos){
        mainStr.erase(pos,subStr.length());
        pos = mainStr.find(subStr);
    }

    return mainStr;
}

int main(){

    string mainStr = "geeks for geeks geeks quiz practice qa";
    string subString = "geeks";

    cout<<"Ans : "<<remove(mainStr, subString)<<endl;

    return 0;
}