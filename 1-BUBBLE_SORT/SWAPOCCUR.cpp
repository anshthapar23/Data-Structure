#include<iostream>
using namespace std;
int bubble(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
            }
        }
        return count;
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
    int c=bubble(arr,n);
    cout<<"\nAfter Bubble sort\n";
    display(arr,n);
    
    cout<<"\n total swap occurs : "<<c;
    return 0;
}