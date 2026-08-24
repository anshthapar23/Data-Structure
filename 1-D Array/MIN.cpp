#include <iostream>
using namespace std;

int Min(int arr[], int n)
{
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"MINIMUM: "<<min;
}
int main()
{
    int arr[] = {12,45,8,90,56};
    int n = sizeof(arr) / sizeof(int);
    Min(arr, n);
}