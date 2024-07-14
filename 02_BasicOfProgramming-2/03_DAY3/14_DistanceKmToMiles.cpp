#include <iostream>
using namespace std;

double printKmToMiles(double kilometer)
{
    double miles = kilometer * (0.62137119);
    return miles;
}

int main()
{
    double kilometer;
    cout << "Enter Kilometer : ";
    cin >> kilometer;

    double miles = printKmToMiles(kilometer);
    cout << kilometer << " km : " << miles << " miles" << endl;

    return 0;
}