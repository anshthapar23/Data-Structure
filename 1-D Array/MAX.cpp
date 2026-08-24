#include <iostream>
using namespace std;

int Max(int arr[], int n, int max=0)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"MAXIMUM: "<<max;
}
int main()
{
    int arr[] = {12,45,8,90,56};
    int n = sizeof(arr) / sizeof(int);
    Max(arr, n);
}