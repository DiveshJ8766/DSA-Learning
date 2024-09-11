#include <iostream>
using namespace std;

void printSolidSquarePattern(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for columns
        for (int currentCol = 0; currentCol < totalRows; currentCol++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void printSolidHallowSquarePattern(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for columns
        for (int currentCol = 0; currentCol < totalRows; currentCol++)
        {
            if (currentCol == 0 || currentCol == totalRows - 1 || currentRow == 0 || currentRow == totalRows - 1)
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

void printInvertedHalfPyramid(int totalRows)
{
    //* for Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for columns
        for (int currentCol = 0; currentCol < totalRows - currentRow; currentCol++)
        {
            if (currentCol == 0 || currentCol == (totalRows - currentRow) - 1 || currentRow == 0)
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

void printHallowFullPyramid(int totalRows)
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

void printNumericHallowHalfPyramid(int totalRows)
{
    //* for Rows
    for(int currentRow = 0;currentRow < totalRows;currentRow++){
        //* for columns
        for(int currentCol=0;currentCol < currentRow+1;currentCol++){
            if(currentCol==0 || currentCol == currentRow || currentRow == totalRows-1)
                cout<<currentCol+1<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

void printNumericHallowInvertedHalfPyramid(int totalRows)
{
    //* for Rows
    for(int currentRow = 0;currentRow < totalRows;currentRow++){
        //* for columns
        for(int currentCol=0;currentCol < (totalRows-currentRow);currentCol++){
            if(currentCol==0 || currentCol == ((totalRows-currentRow) -1) || currentRow == 0)
                cout<<currentCol+1<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter Number Of Rows : ";
    cin >> numberOfRows;

    cout << "Solid Square Pattern : " << endl;
    printSolidSquarePattern(numberOfRows);
    cout << endl
         << endl;

    cout << "Solid Hallow Square Pattern : " << endl;

    printSolidHallowSquarePattern(numberOfRows);
    cout << endl
         << endl;

    cout << "Inverted Half Pyramid Pattern : " << endl;

    printInvertedHalfPyramid(numberOfRows);
    cout << endl
         << endl;

    cout << "Hallow Full Pyramid Pattern : " << endl;

    printHallowFullPyramid(numberOfRows);

    cout << endl
         << endl;

    cout << "Numeric Hallow Half Pyramid Pattern : " << endl;

    printNumericHallowHalfPyramid(numberOfRows);

    cout << endl
         << endl;

          cout << "Numeric Hallow Inverted Half Pyramid Pattern : " << endl;

    printNumericHallowInvertedHalfPyramid(numberOfRows);

    cout << endl
         << endl;

    return 0;
}