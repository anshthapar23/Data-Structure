#include<iostream>
using namespace std;

void smallest(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[],int n){
    cout<<arr[n-1];
}

int main(){
    int arr[]={1,2,4,6,9,2,-1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"\nAfter swapping samllest: ";

    smallest(arr,n);
    display(arr,n);
    return 0;
}