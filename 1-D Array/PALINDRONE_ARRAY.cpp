#include <iostream>
using namespace std;

void palindrone(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (i < (n - i - 1))
        {
            if (arr[i] != arr[n - i - 1])
            {
                cout << "IT IS NOT A PALINDRONE";
                return;
            }
        }
    }
    cout << "it is a palindrone array";
}

int main()
{
    int arr[] = {10, 20, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);
    palindrone(arr, n);
}