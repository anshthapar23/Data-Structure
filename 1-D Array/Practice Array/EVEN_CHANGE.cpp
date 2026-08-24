#include<iostream>
using namespace std;
void EVEN_CHANGE(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]*arr[i];
        }
    }
}

void display(int arr[],int n){
    cout<<"["<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<"]";
}

int main(){
    int arr[]={2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    EVEN_CHANGE(arr,n);
    display(arr,n);
    return 0;
}