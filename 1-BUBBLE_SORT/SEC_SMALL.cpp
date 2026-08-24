#include<iostream>
using namespace std;

void sec_small(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[],int n){
    cout<<arr[n-2];
}

int main(){
    int arr[]={1,2,4,6,9,2,-1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"\nAfter swapping second samllest: ";

    sec_small(arr,n);
    display(arr,n);
    return 0;
}