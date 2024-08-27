#include <iostream>
using namespace std;

int getLenght(string str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

int getSize(string str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

bool isEmpty(string str)
{
    if (str.length() == 0)
    {
        return true;
    }
    return false;
}

string pushback(string str, char ch)
{
    str += ch;
    return str;
}

string popback(string str)
{
    if (!str.empty())
        str.resize(getLenght(str) - 1);
    return str;
}

string substr(string str, int index, int lenght)
{
    string part;
    if (index >= 0 && (index + lenght) <= getLenght(str))
    {
        for (int i = index; i < (index + lenght); i++)
        {
            part += str[i];
        }
    }

    return part;
}

bool compare(string str1, string str2)
{
    if (getLenght(str1) != getLenght(str2))
        return false;
    else
    {
        for (int i = 0; i < getLenght(str1); i++)
        {
            if (str1[i] != str2[i])
                return false;
        }
        return true;
    }
}

int main()
{

    string str1 = "";
    string str2 = "divesh";
    string str3 = "d";

    cout << "Empty : " << isEmpty(str1) << endl;
    cout << "Empty : " << isEmpty(str2) << endl;
    cout << "Empty : " << isEmpty(str3) << endl;

    return 0;
}