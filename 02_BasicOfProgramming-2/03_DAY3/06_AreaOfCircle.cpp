#include <iostream>
using namespace std;

double printAreaOfCircle(int radius){
    double area = 3.14 * radius * radius;
    return area;
}

int main()
{
    int radius;
    cout << "Enter Radius : ";
    cin >> radius;

    double area = printAreaOfCircle(radius);
    cout << "Area of Circle with " << radius << " : " << area << endl;

    return 0;
}