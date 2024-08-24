#include <iostream>
#include <cstring>
#include <string.h>
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

//* Two Pointer Approach
bool isPalindrome(char userName[])
{
    int i = 0;
    int j = getLength(userName) - 1;

    while (i < j)
    {
        if (userName[i] == userName[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

//* using reverse Logic
char *reverseArray(char userName[])
{
    int i = 0;
    int j = getLength(userName) - 1;

    while (i < j)
    {
        swap(userName[i], userName[j]);
        i++;
        j--;
    }
    return userName;
}

int main()
{

    char userName[100];
    cout << "Enter Name : ";
    cin >> userName;

    cout << "Name : " << userName << endl;

    char temp[100];
    strcpy(temp, userName);

    bool checkPalindrome = isPalindrome(userName);

    if (checkPalindrome)
    {
        cout << userName << " : Palindrome" << endl;
    }
    else
    {
        cout << userName << " : Not Palindrome" << endl;
    }

    cout << "-------------------------------" << endl;

    
    char *reverseName = reverseArray(userName);
    cout << "Reverse Name : " << reverseName<<" " <<temp <<" "<<userName  << endl;

    if (strcmp(temp, reverseName) == 0)
    {
        cout << userName << " : Palindrome" << endl;
    }
    else
    {
        cout << userName << " : Not Palindrome" << endl;
    }

    return 0;
}