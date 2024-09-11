#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //* integer Vector
    vector<int> arr;
    cout << "Size of arr : " << arr.size() << endl;
    cout << "Capacity of arr : " << arr.capacity() << endl;

    //* character vector
    vector<char> brr;
    cout << "Size of brr : " << brr.size() << endl;
    cout << "Capacity of brr : " << brr.capacity() << endl;

    //* first way
    vector<int> v(10, -1);
    cout << "Printing Values of v : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //* first way
    vector<int> v1(10, 23);
    cout << "Printing Values of v1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;
    int size;
    cout << "Enter Size : ";
    cin >> size;

    vector<int> marks(size);
    cout << "Enter Marks for " << size << " students : ";
    for (int i = 0; i < marks.size(); i++)
    {
        cin >> marks[i];
    }

    cout << "Printing Marks of Students : ";
    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    int s;
    cout << "Enter Size : ";
    cin >> s;

    vector<int> demo;
    for (int i = 0; i < s; i++)
    {
        int marks;
        cin >> marks;
        demo.push_back(marks);
    }

    //* printing array
    for (int i = 0; i < s; i++)
    {
        cout << demo[i] << " ";
        demo.pop_back();
    }
    cout << endl;
    cout << "Demo vector is Empty : " << demo.empty();

    //* method 5
    vector<int> student{12, 342, 212, 421};
    cout << endl
         << "printing Students Marks : " << endl;
    for (int i = 0; i < student.size(); i++)
    {
        cout << student[i] << " ";
    }
    cout << endl;
    
    return 0;
}