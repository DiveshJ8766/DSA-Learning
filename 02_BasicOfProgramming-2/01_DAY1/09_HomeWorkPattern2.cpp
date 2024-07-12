#include <iostream>
using namespace std;

void printNumericPalindromeEquilateralPyramid(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for space
        for (int currentCol = 0; currentCol < (totalRows - currentRow - 1); currentCol++)
        {
            cout << "  ";
        }

        //* for increment columns
        for (int currentCol = 0; currentCol < currentRow + 1; currentCol++)
        {
            cout << currentCol + 1 << " ";
        }

        //* for decreasing columns
        for (int currentCol = currentRow; currentCol >= 1; currentCol--)
        {
            cout << currentCol << " ";
        }

        cout << endl;

        cout << endl;
    }
}

void printFancyPattern1(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for left star
        for (int currentCol = 0; currentCol < (totalRows + 3 - currentRow); currentCol++)
        {
            cout << "*";
        }

        //* for numeric pattern
        for (int currentCol = 0; currentCol < (2 * currentRow + 1); currentCol++)
        {
            if (currentCol % 2 == 0)
            {
                cout << currentRow + 1;
            }
            else
            {
                cout << "*";
            }
        }

        //* for right star
        for (int currentCol = 0; currentCol < (totalRows + 3 - currentRow); currentCol++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printSolidHalfDiamond(int totalRows)
{
    //* for first pattern
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for
        for (int currentCol = 0; currentCol < currentRow + 1; currentCol++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //* for second pattern
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for
        for (int currentCol = (totalRows - currentRow - 1); currentCol > 0; currentCol--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printFancyPattern2(int totalRows)
{
    //* for first pattern
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        cout << "*";

        //* for increasing part
        for (int currentCol = 0; currentCol < currentRow; currentCol++)
        {
            cout << currentCol + 1;
        }

        //* for decreasing part
        for (int currentCol = currentRow - 1; currentCol >= 1; currentCol--)
        {
            cout << currentCol;
        }

        if (currentRow > 0)
        {
            cout << "*";
        }

        cout << endl;
    }
     //* for first pattern
    for (int currentRow = (totalRows-1); currentRow > 0; currentRow--)
    {
        cout << "*";

        //* for increasing part
        for (int currentCol = 0; currentCol  < (totalRows-currentRow-2); currentCol++)
        {
            cout << currentCol + 1;
        }

        //* for decreasing part
        for (int currentCol = (totalRows-currentRow-1); currentCol > 0; currentCol--)
        {
            cout << currentCol;
        }

        if (currentRow > 0)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void printFancyPattern3(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for space
        for (int spaceCount = 0; spaceCount < (totalRows - currentRow - 1); spaceCount++)
        {
            cout << " ";
        }

        //* for Star
        for (int starCount = 0; starCount < currentRow + 1; starCount++)
        {
            if (starCount == 0 || starCount == currentRow || currentRow == totalRows - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

void printFloydsTrianglePattern(int totalRows)
{
    int count = 1;
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for columns
        for (int currentCol = 0; currentCol < currentRow + 1; currentCol++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

void printPascalsTrianglePattern(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for columns
        for (int currentCol = 0; currentCol < (totalRows - currentRow); currentCol++)
        {
            if (currentCol == 0 || currentCol == ((totalRows - currentRow) - 1) || currentRow == 0)
                cout << currentCol + 1 << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void printButterflyPattern(int totalRows)
{
    //* for First pattern
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for left star
        for (int currentCol = 0; currentCol < currentRow + 1; currentCol++)
        {
            cout << "*";
        }

        //* for spaces
        for (int currentCol = 0; currentCol < ((2 * (totalRows - currentRow - 1)) + 1); currentCol++)
        {
            cout << " ";
        }

        //* for right star
        for (int currentCol = 0; currentCol < currentRow + 1; currentCol++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //* for Second pattern
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for left star
        for (int currentCol = (totalRows - currentRow); currentCol > 0; currentCol--)
        {
            cout << "*";
        }

        //* for spaces
        for (int currentCol = 0; currentCol < 2 * currentRow + 1; currentCol++)
        {
            cout << " ";
        }

        //* for right star
        for (int currentCol = (totalRows - currentRow); currentCol > 0; currentCol--)
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

    cout << "Numeric Palindrome Equilateral Pyramid : " << endl;
    printNumericPalindromeEquilateralPyramid(numberOfRows);
    cout << endl
         << endl;

    cout << "Fancy Pattern 1 : " << endl;

    printFancyPattern1(numberOfRows);
    cout << endl
         << endl;

    cout << "Solid Half Diamond : " << endl;

    printSolidHalfDiamond(numberOfRows);
    cout << endl
         << endl;

    cout << "Fancy Pattern 2 : " << endl;

    printFancyPattern2(numberOfRows);

    cout << endl
         << endl;

    // cout << "Numeric Hallow Half Pyramid Pattern : " << endl;

    // printNumericHallowHalfPyramid(numberOfRows);

    // cout << endl
    //      << endl;

    cout << "Floyds Triangle Pattern : " << endl;

    printFloydsTrianglePattern(numberOfRows);

    cout << endl
         << endl;

    cout << "ButterFly Pattern : " << endl;

    printButterflyPattern(numberOfRows);

    cout << endl
         << endl;

    return 0;
}