#include <iostream>
using namespace std;

void utils(int *ptr,int **ptr2)
{

    //* pass By value (Copy is Created)
    // ptr = ptr + 1;

    //* pass By Reference
    // *ptr = *ptr + 1;

    //* change the value of ptr 
    // *ptr2 = *ptr2 + 1;

    //* Change the value of Real Value
    **ptr2 = **ptr2 + 1;
}

int main()
{
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "Value of a : " << a << endl;
    cout << "Address of a : " << &a << endl;

    cout << "Value of Ptr : " << ptr<< endl;
    cout << "Value of Ptr : " << *ptr << endl;
    cout << "Address of Ptr : " << &ptr << endl;

    cout << "Value of Ptr2 : " << ptr2<< endl;
    cout << "Value of Ptr2 : " << *ptr2 << endl;
    cout << "Address of Ptr2 : " << &ptr2 << endl;

    utils(ptr,ptr2);

    cout << "Value of a : " << a << endl;
    cout << "Address of a : " << &a << endl;

    cout << "Value of Ptr : " << ptr << endl;
    cout << "Value of Ptr : " << *ptr << endl;
    cout << "Address of Ptr : " << &ptr << endl;

    cout << "Value of Ptr2 : " << ptr2 << endl;
    cout << "Value of Ptr2 : " << *ptr2 << endl;
    cout << "Address of Ptr2 : " << &ptr2 << endl;

    return 0;
}