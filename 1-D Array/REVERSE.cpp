#include<iostream>
using  namespace std;

void Reverse(int arr[],int n){
    //only PRINTING an array

    // cout<<"[";
    // for(int i=n-1;i>(-1);i--){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"]";
    int temp;
    for(int i=0;i<n/2;i++){
//WITHOUT USING SWAP VARIABLE
        // temp=arr[i];
        // arr[i]=arr[n-1-i];
        // arr[n-1-i]=temp;

//using swap keyword
        if(i<(n-i-1)){

            swap(arr[i],arr[n-i-1]);

            
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    Reverse(arr,n);
}