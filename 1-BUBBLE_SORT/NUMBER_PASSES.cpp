#include<iostream>
using namespace std;
int bubble(int arr[],int n){
    bool check=false;
    int pass=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check=true;
            }

            }
            
        }
        return pass;
    }
 void display(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
    int arr[]={1,4,2,6,7,4,2};
    int n=sizeof(arr)/sizeof(int);
    int c=bubble(arr,n);
    cout<<"\nAfter Bubble sort\n";
    display(arr,n);
    
    cout<<"\n total passes occurs : "<<c;
    return 0;
}