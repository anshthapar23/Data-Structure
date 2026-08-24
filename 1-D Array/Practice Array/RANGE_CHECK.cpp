#include<iostream>
using namespace std;

void RANGE(int arr[],int n,int L,int R){ 
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=L && arr[i]<=R){
            count++;
        }
    }
    cout<<count;
}

int main(){
    int arr[]={5,12,20,25,30};
    int n=sizeof(arr)/sizeof(int);
    int L=10;
    int R=25;
    RANGE(arr,n,L,R);
    return 0;
}