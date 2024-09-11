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
        for (int currentCol = 0; currentCol < (2 * totalRows - (2 * currentRow + 1)); currentCol++)
        {
            if (currentCol % 2 == 0)
            {
                cout << totalRows - currentRow << " ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}

void printFancyPattern1(int totalRows)
{
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        for (int currentCol = 0; currentCol < currentRow + 1; currentCol++)
        {
            cout << currentRow + 1 << " ";
            if (currentCol != currentRow)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        for (int currentCol = 0; currentCol < (totalRows - currentRow); currentCol++)
        {
            cout << totalRows - currentRow << " ";
            if (currentCol != (totalRows - currentRow - 1))
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

    // printFancyPattern(numberOfRows);
    printFancyPattern1(numberOfRows);

    return 0;
}