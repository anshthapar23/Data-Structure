#include<iostream>
using namespace std;

void NEG(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
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
    int arr[]={10,-5,20,-8,30};
    int n=sizeof(arr)/sizeof(int);
    NEG(arr,n);
    display(arr,n);
    return 0;
}