#include <iostream>
using namespace std;

//* lenght
int getlength(string str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

//* Silding Window
int find(string originalStr, string findStr)
{
    int originalLenght = getlength(originalStr);
    int findLenght = getlength(findStr);

    for (int i = 0; i < originalLenght - findLenght; i++)
    {
        int j = 0;
        for (; j < findLenght; j++)
        {
            if (originalStr[i + j] != findStr[j])
                break;
        }

        if (j == findLenght)
        {
            return i;
        }
    }

    return -1;
}


//* Replace
string replace(string originalStr,string newStr,string replaceStr){
    int index = find(originalStr,replaceStr);

    if(index != -1){
        string before = originalStr.substr(0,index);
        string after = originalStr.substr(index + getlength(replaceStr));

        return before + newStr + after;
    }

    return originalStr;
}

//* Erase
string erase(string originalStr,string eraseStr){
   int index = find(originalStr,eraseStr);

   if(index != -1){
    string before = originalStr.substr(0,index);
    string after = originalStr.substr(index+getlength(eraseStr));

    return before+after;
   }

   return originalStr;
}

//* copy
void copy(string srcStr,string &desStr){  
    desStr = srcStr;
}

//* Resize
string resize(string str,int newSize,char fillChar = ' '){
    int currentSize = getlength(str);

    if(currentSize < newSize){
        for(int i =0;i < getlength(str);i++){
            str+=fillChar;
        }
    }

    else if(currentSize > newSize){
        str = str.substr(0,newSize);
    }

    return str;
}

int main()
{

    string str1 = "Today is a Beautiful Day! Make it beautiful today!";
    string str2 = "DAY";

    int index = find(str1, str2);

    if (index == -1)
        cout << "Not Found!!" << endl;
    else
        cout << "Found at Index : " << index << endl;

    return 0;
}