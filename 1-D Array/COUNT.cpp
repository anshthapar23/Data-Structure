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
    cout << "Frequency="<<count;
}
int main()
{
    int arr[] = {2,4,2,5,2,6};
    int n = sizeof(arr) / sizeof(int);
    int tar = 2;
    targetfind(arr, n, tar);
}