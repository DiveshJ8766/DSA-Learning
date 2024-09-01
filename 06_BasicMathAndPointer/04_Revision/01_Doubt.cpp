#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int(*ptr)[10] = &arr;

    cout<<"Base Address : "<<arr<<endl;
    cout<<"Second Element Address : "<<&arr[1]<<endl;
    cout<<"Third Element Address : "<<&arr[2]<<endl;


    cout << "Elements of arr : " << endl;
    for (int i =0;i < 10;i++)
    {
        cout <<"Address of i : "<<(*ptr) + i<<" Value of i : "<< (*ptr)[i] << " "<<endl;
    }
    cout << endl;


    return 0;
}