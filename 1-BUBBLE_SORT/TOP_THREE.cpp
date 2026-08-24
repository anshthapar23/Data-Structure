#include<iostream>
using namespace std;

void largest(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,4,6,9,2};
    int n=sizeof(arr)/sizeof(int);

    largest(arr,n);
    display(arr,n);
    return 0;
}