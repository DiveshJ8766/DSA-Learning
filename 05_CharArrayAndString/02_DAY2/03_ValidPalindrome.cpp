#include<iostream>
using namespace std;

bool checkPalindrome(string s,int start,int end){
    int i = start;
    int j = end;

    while(i <= j){
        if(s[i] != s[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;
}

bool checkValidPalindrome(string str){
    int i =0 ;
    int j = str.length()-1;

    while(i <= j){
        if(str[i] != str[j]){
            return checkPalindrome(str,i+1,j) || checkPalindrome(str,i,j-1);
        }
        i++;
        j--;
    }

    return true;
}

int main(){

    string str = "A man, a plan, a canal: Panama";
    cout<<"check : "<<checkValidPalindrome(str)<<endl;

    return 0;
}