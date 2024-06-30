#include<iostream>
using namespace std;

//* Based on row value
void printAlphabetPalindromePyramid(int totalRows){
    //* for Rows
    for(int currentRow = 0;currentRow < totalRows;currentRow++){
        //* for Column
        for(int currentCol=0;currentCol < currentRow+1;currentCol++){
            int number = currentCol+1;
            char ch = number + 'A' - 1;
            cout<<ch<<" ";
        }

        //* for Reverse from row number
        for(int reverseCol=currentRow;reverseCol >=1;reverseCol--){
             int number = reverseCol;
            char ch = number + 'A' - 1;
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

void printAlphabetPalindromePyramid1(int totalRows){
 //* for Rows
    for(int currentRow = 0;currentRow < totalRows;currentRow++){
        //* for Column
        int currentCol;
        for( currentCol=0;currentCol < currentRow+1;currentCol++){
            int number = currentCol+1;
            char ch = number + 'A' - 1;
            cout<<ch<<" ";
        }

        currentCol-=1;

        //* for Reverse from row number
        for(;currentCol >=1;currentCol--){
             int number = currentCol;
            char ch = number + 'A' - 1;
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

int main() {
    int numberOfRows;
    cout<<"Enter Number Of Rows : ";
    cin>>numberOfRows;

    // printAlphabetPalindromePyramid(numberOfRows);
    printAlphabetPalindromePyramid1(numberOfRows);

    return 0;
}