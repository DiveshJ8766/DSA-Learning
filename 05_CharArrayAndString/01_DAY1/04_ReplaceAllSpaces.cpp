#include <iostream>
using namespace std;

int getLength(char userName[])
{
    int count = 0;
    while (userName[count] != '\0')
    {
        count++;
    }
    return count;
}

//* using While Loop
void replaceSpace(char userName[])
{
    int i = 0;
    while (userName[i] != '\0')
    {
        if (userName[i] == ' ')
        {
            userName[i] = '@';
        }

        i++;
    }
}

//* using For Loop
void replaceSpace2(char userName[])
{
    int j = getLength(userName) - 1;

    for (int i = 0; i < j; i++)
    {
        if (userName[i] == '@')
        {
            userName[i] = '#';
        }
    }
}

int main()
{

    char userName[100];
    cout << "Enter Name : ";
    cin.getline(userName, 100);

    cout << "Before Replace : " << userName << endl;
    replaceSpace(userName);
    cout << "After Replace : " << userName << endl;

    cout << "----------------------------" << endl;

    cout << "Before Replace : " << userName << endl;
    replaceSpace2(userName);
    cout << "After Replace : " << userName << endl;

    return 0;
}