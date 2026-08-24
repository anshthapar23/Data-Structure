#include <iostream>
using namespace std;

int Even(int arr[], int n)
{
    cout<<"[";
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"]";

}
int main()
{
    int arr[] = {3,6,8,11,15,20};
    int n = sizeof(arr) / sizeof(int);
    Even(arr, n);
}