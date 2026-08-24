#include<iostream>
using namespace std;
void Assending(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,4,6,9,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting: ";
    display(arr,n);
    cout<<"\nAfter swapping ascending: ";

    Assending(arr,n);
    display(arr,n);
    return 0;
}