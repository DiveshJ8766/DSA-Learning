#include <iostream>
using namespace std;

void printFullPyramid(int totalRows)
{
    //* For Number of Rows
    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        //* For Spaces
        for (int spaceCount = 0; spaceCount < (totalRows - (currentRow + 1)); spaceCount++)
        {
            cout << " ";
        }

        //* For Stars
        for (int starCount = 0; starCount < (currentRow + 1); starCount++)
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

    printFullPyramid(numberOfRows);
    return 0;
}