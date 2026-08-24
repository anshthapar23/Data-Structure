#include<iostream>
using namespace std;
void FirstLast(int arr[],int n){
    swap(arr[0],arr[n-1]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    FirstLast(arr,n);
}