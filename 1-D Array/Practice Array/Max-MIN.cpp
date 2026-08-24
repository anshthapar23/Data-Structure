#include<iostream>
using namespace std;

void MIN_MAX(int arr[],int n){ 
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"DIFFERENCE BETWEEN MAX AND MIN :   "<<max-min;

}

int main(){
    int arr[]={10,25,5,40,15};
    int n=sizeof(arr)/sizeof(int);
    MIN_MAX(arr,n);
    return 0;
}