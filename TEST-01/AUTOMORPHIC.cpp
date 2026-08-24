#include <iostream>
using namespace std;
void automorphic(int n)
{
    int temp = n;
    int square = n * n;
    int count = 0;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    int power = 1;
    for (int i = 0; i < count; i++)
    {
        power = power * 10;
    }
    if (n == square % power)
    {
        cout << n << " is an Automorphic Number";
    }
    else
    {
        cout << n << " is not an Automorphic Number";
    }
}

int main()
{
    int n = 25;
    automorphic(n);
    return 0;
}