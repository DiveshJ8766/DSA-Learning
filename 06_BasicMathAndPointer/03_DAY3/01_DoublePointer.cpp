#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "Value of A : " << a << endl;
    cout << "Address of A : " << &a << endl;

    cout << "Value of Ptr : " << ptr << endl;
    cout << "Address of Ptr : " << &ptr << endl;
    cout << "Value of Ptr : " << *ptr << endl;

    cout << "Value of Ptr2 : " << ptr2 << endl;
    cout << "Address of Ptr2 : " << &ptr2 << endl;
    cout << "Value of Ptr2 : " << *ptr2 << endl;
    cout << "Double Ptr Value : " << **ptr2 << endl;

    return 0;
}