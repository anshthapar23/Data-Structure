// write a program to find kth largest element 
#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void Selection_sort(int arr[], int n,int target)
{
    int count=0;
    int total=0;
    int minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
            count++;
        }

    }
}



int main()
{
    int arr[] = {2,3,4,1,6,8};
    int n = sizeof(arr) / sizeof(int);
    int target=3;
    Selection_sort(arr, n,target);
    cout<<arr[n-(target-1)];
    return 0;
}