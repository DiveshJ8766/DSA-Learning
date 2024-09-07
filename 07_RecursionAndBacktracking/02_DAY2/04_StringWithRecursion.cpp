#include <iostream>
#include <vector>
using namespace std;

//* Print Frequency of key
void checkKeyFrequency(string str, char key, int index,int& count)
{
    //* base case
    if (index >= str.length())
    {
        return;
    }

    //* Processing
    if (str[index] == key)
    {
        count++;
    }

    //* Recursive call
    checkKeyFrequency(str, key, index + 1, count);
}

//* Store the occurence of key in vector
void checkIndexOccurrence(string str, char key, int index, vector<int> &ans)
{
    //* base case
    if (index >= str.length())
    {
        return;
    }

    //* Processing
    if (str[index] == key)
    {
        ans.push_back(index);
    }

    //* Recursive call
    checkIndexOccurrence(str, key, index + 1, ans);
}

//* Print the occurence of key
void printIndexOccurrence(string str, char key, int index)
{
    //* base case
    if (index >= str.length())
    {
        return;
    }

    //* Processing
    if (str[index] == key)
    {
        cout << index << " ";
    }

    //* Recursive call
    printIndexOccurrence(str, key, index + 1);
}

//* if key is present return index
//* if key is not present return -1
int checkIndex(string str, char key, int index)
{
    //* base case
    if (index >= str.length())
    {
        return -1;
    }

    //* Processing
    if (str[index] == key)
    {
        return index;
    }

    //* Recursive call
    return checkIndex(str, key, index + 1);
}

//* Find key in string
bool checkKey(string str, char key, int index)
{
    //* base case
    if (index >= str.length())
    {
        return false;
    }

    //* Processing
    if (str[index] == key)
    {
        return true;
    }

    //* Recursive call
    return checkKey(str, key, index + 1);
}

//* Find key in string
//* passing by reference
void checkString(string str, char key, int index, bool &ans)
{
    //* base case
    if (index >= str.length())
    {
        return;
    }
    //* Processing
    if (str[index] == key)
    {
        ans = true;
        return;
    }

    //* Recursive call
    checkString(str, key, index + 1, ans);
}

int main()
{

    string str = "divesh vijay jadhav";
    char key = 'y';
    int index = 0;

    bool ans = checkKey(str, key, index);

    cout << endl;
    if (ans)
        cout << "Key is present in String!" << endl;
    else
        cout << "Key is not Present in String!" << endl;

    cout << endl;

    bool ansString = false;
    checkString(str, key, index, ansString);

    cout << endl;
    if (ansString)
        cout << "Key is present in String!" << endl;
    else
        cout << "Key is not Present in String!" << endl;

    cout << endl;

    int i = checkIndex(str, key, index);
    cout << "Element found at index : " << i << endl;

    cout<<"\nPrinting all occurance of key :" << endl;

    printIndexOccurrence(str, key, index);

    cout << endl
         << endl;

    vector<int> ansIndex;
    checkIndexOccurrence(str, key, index, ansIndex);
    cout << "Index of all occurance : "<<endl;
    for (int i = 0; i < ansIndex.size(); i++)
    {
        cout << ansIndex[i] << " ";
    }

    cout << endl<<endl;

    int count = 0;

    checkKeyFrequency(str, key, index, count);
    cout << "Frequency of key : " << count << endl;

    cout << endl<<endl;

    return 0;
}