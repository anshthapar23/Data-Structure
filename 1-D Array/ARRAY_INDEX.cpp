#include <iostream>
using namespace std;

int Max(int arr[], int n, int max=0)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"INDEX "<<i<<" : "<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {11,22,33,44};
    int n = sizeof(arr) / sizeof(int);
    Max(arr, n);
}