#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void Selection_sort(int arr[], int n)
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
        cout<<"After "<<i+1<<" passes : ";
        display(arr,n);
        total++;

    }
    cout<<total<<" passes";
    cout<<count<<" swaps";
}



int main()
{
    int arr[] = {2,1,3};
    int n = sizeof(arr) / sizeof(int);
    Selection_sort(arr, n);
    return 0;
}