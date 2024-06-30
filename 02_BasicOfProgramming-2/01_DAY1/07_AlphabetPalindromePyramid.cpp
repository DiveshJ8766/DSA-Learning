#include<iostream>
using namespace std;

void printAlphabetPalindromePyramid(int totalRows){
    //* for Rows
    for(int currentRow = 0;currentRow < totalRows;currentRow++){
        //* for Column
        for(int currentCol=0;currentCol < currentRow+1;currentCol++){
            cout<<currentCol+1<<" ";
        }

        //* for Reverse from row number
        for(int reverseCol=currentRow;reverseCol >=1;reverseCol--){
            cout<<reverseCol<<" ";
        }

        cout<<endl;
    }
}

int main() {
    int numberOfRows;
    cout<<"Enter Number Of Rows : ";
    cin>>numberOfRows;

    printAlphabetPalindromePyramid(numberOfRows);

    return 0;
}