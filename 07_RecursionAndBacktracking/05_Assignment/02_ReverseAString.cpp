#include <iostream>
using namespace std;


void reverseString(string &str,int start ,int end){
    //* Base case
    if(start > end)
        return;
        
    //* ek case solve karo
    swap(str[start],str[end]);
    
    //* recursive call
    reverseString(str,start+1,end-1);
}

int main(){
    
    string str = "kadak";
    int start = 0;
    int end = str.length() - 1;
    
    reverseString(str,start,end);
    
    cout<<"Reverse of a String : "<<str<<endl;
    
    return 0;
}