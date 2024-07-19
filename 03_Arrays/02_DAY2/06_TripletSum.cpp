#include <iostream>
#include <vector>
using namespace std;

void printFourthSum(vector<int> v1, vector<int> v2, vector<int> v3, vector<int> v4, int sum)
{
    if (v1.size() <= 0 || v2.size() <= 0 || v3.size() <= 0 || v4.size() <= 0)
    {
        return;
    }
    cout << "Pairs Are : " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            for (int k = 0; k < v3.size(); k++)
            {
                for (int l = 0; l < v4.size(); l++)
                {
                    if (v1[i] + v2[j] + v3[k] + v4[l] == sum)
                    {
                        cout << "v1 : " << v1[i] << " , " << "v2 : " << v2[j] << " , " << "v3 : " << v3[k] << " and " << "v4 : " << v4[l] << endl;
                    }
                }
            }
        }
    }
}

void printFourthSum1(vector<int> v1, int sum)
{

    if (v1.size() <= 0)
    {
        return;
    }
    cout << "Pairs Are : " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            for (int k = j + 1; k < v1.size(); k++)
            {
                for (int l = k + 1; l < v1.size(); l++)
                {
                    if (v1[i] + v1[j] + v1[k] + v1[l] == sum)
                    {
                        cout << "num1 : " << v1[i] << " , " << "num2 : " << v1[j]<< " , " << "num3 : " << v1[k] << " and " << "num4 : " << v1[l] << endl;
                    }
                }
            }
        }
    }
}

void printTripletSum(vector<int> v1, vector<int> v2, vector<int> v3, int sum)
{

    if (v1.size() <= 0 || v2.size() <= 0 || v3.size() <= 0)
    {
        return;
    }
    cout << "Pairs Are : " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            for (int k = 0; k < v3.size(); k++)
            {

                if (v1[i] + v2[j] + v3[k] == sum)
                {
                    cout << "v1 : " << v1[i] << " , " << "v2 : " << v2[j] << " and " << "v3 : " << v3[k] << endl;
                }
            }
        }
    }
}

void printTripletSum1(vector<int> v1, int sum)
{

    if (v1.size() <= 0)
    {
        return;
    }
    cout << "Pairs Are : " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            for (int k = j + 1; k < v1.size(); k++)
            {

                if (v1[i] + v1[j] + v1[k] == sum)
                {
                    cout << "num1 : " << v1[i] << " , " << "num2 : " << v1[j] << " and " << "num3 : " << v1[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int n1;
    cout << "Enter Size of Vector 1 : ";
    cin >> n1;

    int n2;
    cout << "Enter Size of Vector 2 : ";
    cin >> n2;

    int n3;
    cout << "Enter Size of Vector 2 : ";
    cin >> n3;

    int n4;
    cout << "Enter Size of Vector 4 : ";
    cin >> n4;

    int sum;
    cout << "Enter Sum : ";
    cin >> sum;

    vector<int> v1(n1);
    cout << "Enter Elements of Vector 1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }

    vector<int> v2(n2);
    cout << "Enter Elements of Vector 2 : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }

    vector<int> v3(n3);
    cout << "Enter Elements of Vector 3 : ";
    for (int i = 0; i < v3.size(); i++)
    {
        cin >> v3[i];
    }

    vector<int> v4(n4);
    cout << "Enter Elements of Vector 3 : ";
    for (int i = 0; i < v4.size(); i++)
    {
        cin >> v3[i];
    }

    printTripletSum(v1, v2, v3, sum);
    printFourthSum(v1, v2, v3, v4, sum);
    printFourthSum1(v1, sum);
    printTripletSum1(v1, sum);
    return 0;
}