#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            }
        }
    }
 void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
    int arr[]={1,4,2,6,7,4,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Bubble sort\n";
    display(arr,n);
    bubble(arr,n);
    cout<<"\nAfter Bubble sort\n";
    display(arr,n);
    return 0;
}