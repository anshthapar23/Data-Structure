#include <iostream>
using namespace std;
void Convert_Lowercase(string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }
    cout << name;
}
int main()
{
    string name = "I am aNsH thaPar";
    Convert_Lowercase(name);
    return 0;
}