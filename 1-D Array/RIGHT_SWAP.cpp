#include <iostream>
using namespace std;
void RightSwap(int arr[], int n)
{
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
   
}
void Print(int arr[],int n){
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    // rotate k right position
    int k=2;
    for(int i=0;i<k;i++)
        RightSwap(arr, n);
    Print(arr,n);
    return 0;
}