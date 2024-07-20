#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100;

void printRowWise(int row, int col, int arr[][MAX_ARRAY_SIZE])
{
    cout << "\n Row Wise Print :"
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}

void takeInputRowWise(int row, int col, int arr[][MAX_ARRAY_SIZE])
{
    cout << "\n Enter Row Wise Elements : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

// 1 2 3 4 5
// 6 7 7 8 8
// 1 2 5 3 2

void takeInputColumnWise(int row, int col, int arr[][MAX_ARRAY_SIZE])
{
    cout << "\n Enter Column Wise Elements :";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[j][i];
        }
    }

}

int main()
{
    //* 2D Array Declaration
    int arr[25][25];

    //* 2D Array Initialization
    // int a[3][3] = {{1, 2, 3}, {7, 3, 5}, {10, 34, 23}};

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << " Row " << i + 1 << " Elements : ";
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int row;
    cout << "Enter Number of Rows : ";
    cin >> row;

    int col;
    cout << "Enter Number of Columns : ";
    cin >> col;

    int rowWise[row][MAX_ARRAY_SIZE];

    //* Row wise Input and Row wise Print
    // takeInputRowWise(row, col, rowWise);
    // printRowWise(row, col, rowWise);

    //* Col wise Input and Columns Wise Print
    takeInputColumnWise(row, col, rowWise);
    printRowWise(row, col, rowWise);

    return 0;
}