#include <iostream>
using namespace std;

int main()
{

    string quote = "Today is a beautiful day! live and let live";

    //* Lenght function
    cout << "Lenght : " << quote.length() << endl;
    //* Size Function
    cout << "Size : " << quote.size() << endl;

    string str = "";

    //* Empty Function
    bool check = str.empty();
    cout << "Empty : " << (check ? "str1 is Empty" : "str1 Not Empty\n") << endl;

    bool check2 = quote.empty();
    cout << "Empty : " << (check2 ? "str2 is Empty" : "str2 Not Empty\n") << endl;

    //* substr function
    string str3 = quote.substr(0, 25);
    cout << "Substr : " << str3 << endl;

    string str4 = quote.substr(21, 4);
    cout << "Substr : " << str4 << endl;

    //* Compare Function
    string name1 = "Realme Phone";
    string name2 = "Realme (5G) Phone";

    if (name1.compare(name2) == 0)
    {
        cout << "Name1 and Name2 are same" << endl;
    }
    else if (name1.compare(name2) > 0)
    {
        cout << "Name1 is greater than Name2" << endl;
    }
    else if (name1.compare(name2) < 0)
    {
        cout << "Name1 is less than Name2" << endl;
    }
    else
    {
        cout << "Name1 and Name2 are not same" << endl;
    }

    //* Find Function
    int index = quote.find("live");
    cout << "Find : " << index << endl;

    int index1 = quote.find("live", index + 1);
    cout << "Find : " << index1 << endl;

    int index3 = quote.find("divesh");
    if (index3 == string::npos)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    //* replace
    string str5 = quote;
    str5.replace(0, 25, "Hello");
    cout << "Replace : " << str5 << endl;

    //* Erase
    string str6 = quote;
    str6.erase(0, 25);
    cout << "Erase : " << str6 << endl;

    return 0;
}