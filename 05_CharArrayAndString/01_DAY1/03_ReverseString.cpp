#include <iostream>
using namespace std;

int getLength(char username[])
{
    int count = 0;
    while (username[count] != '\0')
    {
        count++;
    }
    return count;
}

void swap(int i, int j, char userName[])
{
    char temp = userName[i];
    userName[i] = userName[j];
    userName[j] = temp;
}

//* using while loop
void reverseName(char userName[])
{
    int i = 0;
    int j = getLength(userName) - 1;

    while (i <= j)
    {
        swap(i, j, userName);
        i++;
        j--;
    }
}

//* using for loop
void reverseName2(char userName[])
{
    int j = getLength(userName) - 1;

    for (int i = 0; i < j; i++)
    {
        swap(i, j, userName);
        j--;
    }
}

int main()
{
    char username[100];
    cout << "Enter User-Name : ";
    cin.getline(username, 100);

    cout << "Before Reverse : " << username << endl;
    reverseName(username);
    cout << "After Reverse : " << username << endl;

    cout << "----------------------------" << endl;

    cout << "Before Reverse : " << username << endl;
    reverseName(username);
    cout << "After Reverse : " << username << endl;

    return 0;
}