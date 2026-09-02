#include <iostream>
using namespace std;
int main()
{
    string str = "apple";
    int ch1 = 'a';
    int ch2 = 'p';
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
        }
        else if (str[i] == ch2)
        {
            str[i] = ch1;
        }
    }
    cout << str;
    return 0;
}