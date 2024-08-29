#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {32, 43, 21, 41, 4, 1, 41, 1, 1, 1};
    cout << "Size of Array : " << sizeof(arr) << " Bytes" << endl;

    int *ptr = arr;
    cout << "Size of Pointer : " << sizeof(ptr) << " Bytes" << endl;

    // arr = arr+1;
    cout << "Address : " << arr + 1 << endl;
    cout << "Address : " << arr + 2 << endl;
    cout << "Address : " << arr + 3 << endl;

    //* Pointer
    int *p = arr;
    p = p + 1;
    cout << "Value of p : " << p << endl;
    p = p + 1;
    cout << "Value of p : " << p << endl;

    cout << "\n``````````````````````````````````\n"
         << endl;

    //* Char Arr
    char ch[10] = "Divesh";
    char *c = ch;
    cout << "Value of ch : " << ch << endl;
    cout << "Address of ch : " << &ch << endl;
    cout << "Value of c at 0th Index : " << ch[0] << endl;
    cout << "Address of Pointer : " << &c << endl;
    cout << "Value of c : " << *c << endl;
    cout << "Value of c : " << c << endl;

    //* test Knowledge
    cout << "\n``````````````````````````````````\n"
         << endl;

    char name[10] = "sherbano";
    char *cptr = &name[0];

    cout << "Name : " << name << endl;
    cout << "Address of Name : " << &name << endl;
    cout << "Charcater of Name : " << *(name + 3) << endl;
    cout << "Pointer : " << cptr << endl;
    cout << "Value of Pointer : " << *(cptr + 3) << endl;
    cout << "Value of Arr : " << cptr + 2 << endl;
    cout << "Value of String : " << *cptr << endl;
    cout << "Cptr + 8 : " << cptr + 8 << endl;

    cout << "\n``````````````````````````````````\n"
         << endl;

    //* Null pointer Issue
    char cha = 'k';
    char *chaPtr = &cha;
    cout << "Value of ch : " << chaPtr << endl;

    //* pointer pointing to string
    char search[] = "NewWorld!";
    char *searchPtr = "NewWorld!";

    cout << "Search : " << search << endl;
    cout << "Search Pointer : " << searchPtr << endl;
    
    return 0;
}