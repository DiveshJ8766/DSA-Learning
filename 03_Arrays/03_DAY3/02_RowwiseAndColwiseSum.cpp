#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 500;

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

void printRowWiseSum(int row, int col, int arr[][MAX_ARRAY_SIZE])
{
    cout << "\n Printing Row sum : \n";

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int printColumnWiseSum(int row, int col, int arr[][MAX_ARRAY_SIZE])
{
    cout << "\n Printing col sum : \n";

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int row;
    cout << "Enter Number of Rows : ";
    cin >> row;

    int col;
    cout << "Enter Number of Columns : ";
    cin >> col;

    int arr[row][MAX_ARRAY_SIZE];

    takeInputRowWise(row,col,arr);

    printRowWiseSum(row, col, arr);

    printColumnWiseSum(row, col, arr);

    return 0;
}