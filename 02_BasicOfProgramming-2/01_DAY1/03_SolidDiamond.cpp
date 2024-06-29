#include <iostream>
using namespace std;

void printSolidDiamond(int totalRows)
{

    //* Upper Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //*For Space
        for (int spaceCount = 0; spaceCount < (totalRows - (currentRow + 1)); spaceCount++)
        {
            cout << " ";
        }

        //* For Stars
        for (int starCount = 0; starCount < currentRow + 1; starCount++)
        {
            cout << "* ";
            ;
        }

        cout << endl;
    }

    //* Lower Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //*For Space
        for (int spaceCount = 0; spaceCount < currentRow; spaceCount++)
        {
            cout << " ";
        }

        //* For Stars
        for (int starCount = 0; starCount < (totalRows - currentRow); starCount++)
        {
            cout << "* ";
            ;
        }

        cout << endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter Number Of Rows : ";
    cin >> numberOfRows;

    printSolidDiamond(numberOfRows);

    return 0;
}