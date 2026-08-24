#include <iostream>
using namespace std;
int targetfind(int arr[], int n, int tar)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    int arr[] = {4, 0, 0, 4, 0, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(int);
    int tar = 0;
    targetfind(arr, n, tar);
}