#include <iostream>
using namespace std;

void printFlippedSolidDiamond(int totalRows)
{

    //* Upper part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for left star
        for (int leftStarCount = 0; leftStarCount < (totalRows - currentRow); leftStarCount++)
        {
            cout << "*";
        }

        //* for space
        for (int spaceCount = 0; spaceCount < (2 * currentRow + 1); spaceCount++)
        {
            cout << " ";
        }

        //* for right star
        for (int rightStarCount = 0; rightStarCount < (totalRows - currentRow); rightStarCount++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //* Lower Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for left star
        for (int leftStarCount = 0; leftStarCount < currentRow + 1; leftStarCount++)
        {
            cout << "*";
        }

        //* for space
        for (int spaceCount = 0; spaceCount < (2 * totalRows - (2 * currentRow + 1)); spaceCount++)
        {
            cout << " ";
        }

        //* for right star
        for (int rightStarCount = 0; rightStarCount < currentRow+1; rightStarCount++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter Number Of Rows : ";
    cin >> numberOfRows;

    printFlippedSolidDiamond(numberOfRows);

    return 0;
}