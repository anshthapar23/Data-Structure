#include<iostream>
using namespace std;
int swap(int arr[],int n){
    swap(arr[0],arr[n-1]);
}
int display(int arr[],int n){
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";

}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    
    cout<<"BEFORE SWAP"<<endl;
    display(arr,n);
    swap(arr,n);
    cout<<endl<<"AFTER SWAP"<<endl;
    display(arr,n);
}