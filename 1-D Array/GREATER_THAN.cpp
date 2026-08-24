#include<iostream>
using namespace std;

void Greater_Than(int arr[],int n, int value){
    for(int i=0;i<n;i++){
        if(arr[i]>value){
            cout<<arr[i]<<" ";
        }
    }

}
int main(){
    int arr[]={12,5,18,9,25};
    int n=sizeof(arr)/sizeof(int);
    int Value=10;
    Greater_Than(arr,n,Value);

}