#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void check(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i < n - 1)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    display(arr, n);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    check(arr, n);

    return 0;
}