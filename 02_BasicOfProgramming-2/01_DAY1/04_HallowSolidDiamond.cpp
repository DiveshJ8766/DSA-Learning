#include <iostream>
using namespace std;

void printHallowSolidDiamond(int totalRows)
{

    //* For Upper Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* For Space
        for (int spaceCount = 0; spaceCount < (totalRows - (currentRow + 1)); spaceCount++)
        {
            cout << " ";
        }

        //* For Stars
        for (int starCount = 0; starCount < (2 * currentRow + 1); starCount++)
        {
            if (starCount == 0 || starCount == (2 * currentRow))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    //* For Lower Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* For Space
        for (int spaceCount = 0; spaceCount < currentRow; spaceCount++)
        {
            cout << " ";
        }

        //* For Stars
        for (int starCount = 0; starCount < (2*totalRows - (2*currentRow+1)); starCount++)
        {
            if (starCount == 0 || starCount == (2*totalRows - (2*currentRow+1))-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter Number of Rows : ";
    cin >> numberOfRows;

    printHallowSolidDiamond(numberOfRows);

    return 0;
}