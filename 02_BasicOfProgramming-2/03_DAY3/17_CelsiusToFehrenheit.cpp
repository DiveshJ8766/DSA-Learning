#include <iostream>
using namespace std;

double printFahrenheit(int celsius)
{
    double Fahrenheit = celsius * (9.0 / 5.0) + 32;
    return Fahrenheit;
}

int main()
{
    int celsius;
    cout << "Enter Celsius : ";
    cin >> celsius;

    double fahrenheit = printFahrenheit(celsius);
    cout << "Fahrenheit : " << fahrenheit << "°F" << endl;

    return 0;
}