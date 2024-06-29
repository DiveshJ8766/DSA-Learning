#include <iostream>
using namespace std;

void printInvertedFullPyramid(int totalRows)
{

    //* For Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* for spaces
        for (int spaceCount = 0; spaceCount < currentRow; spaceCount++)
        {
            cout << " ";
        }

        //* for stars
        for (int starCount = 0; starCount < (totalRows - currentRow); starCount++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter Number of Rows: ";
    cin >> numberOfRows;

    printInvertedFullPyramid(numberOfRows);

    return 0;
}