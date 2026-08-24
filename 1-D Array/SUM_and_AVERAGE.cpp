#include <iostream>
using namespace std;

int SumAVG(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"SUM:"<<sum<<endl;
    cout<<"AVERAGE:"<<sum/n;
}


int main()
{
    int arr[] = {3,6,8,11,15,20};
    int n = sizeof(arr) / sizeof(int);
    SumAVG(arr, n);
}