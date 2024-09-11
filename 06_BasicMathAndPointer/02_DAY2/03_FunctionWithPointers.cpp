#include <iostream>
using namespace std;

void solve(int arr[])
{
    //* size of pointer
    cout << "Inside size of " << sizeof(arr) << endl;
    *(arr + 0) = 26;
}

void change(int arr[],int *ans)
{
    //* address is different but pointing to same array
    cout << "Address of arr : " << &arr << endl;
    *(arr + 1) = 25;

    *ans = *ans +10;
}

void makeChange(char *ptr1,char *ptr2){
    *ptr1 = 'd';
    *(ptr2 +1) = '3';
}

int main()
{
    int arr[5] = {3, 5, 2, 6, 8};
    //* size of Array
    cout << "Size of Array : " << sizeof(arr) << endl;

    //* Address of Arr
    cout << "Address of Array : " << &arr << endl;
    solve(arr);


    cout << "Elements Of Array : " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<endl;

    int ans = 25;
    int *ptr = &ans;
    cout << "Value of ans : " << *ptr << endl;

    change(arr,ptr);

    cout<<"value of ans : "<<ans<<endl;

    char check[] = {'a','r','w','g'};

    char *ptr2 = check;
    char *ptr3 = check;

    makeChange(ptr2,ptr3);

    for(auto i : check){
        cout<<i<<" ";
    }

    cout<<endl;



    return 0;
}