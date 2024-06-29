#include <iostream>
using namespace std;

void printFancyPattern(int totalRows)
{
    //* Upper Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        for (int currentCol = 0; currentCol < (2 * currentRow + 1); currentCol++)
        {
            if (currentCol % 2 == 0)
            {
                cout << currentRow + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    //* Lower Part
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        for (int currentCol = 0; currentCol < (2*totalRows - (2*currentRow+1)); currentCol++)
        {
            if (currentCol % 2 == 0)
            {
                cout << totalRows-currentRow << " ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter Number Of Rows : ";
    cin >> numberOfRows;

    printFancyPattern(numberOfRows);

    return 0;
}