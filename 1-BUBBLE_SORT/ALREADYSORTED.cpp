#include<iostream>
using namespace std;
void Check(int arr[],int n){
    bool check=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check=false;
                break;
            }
        }
        if(check==true){
            cout<<"array is already sorted : ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            break;
        }
    }
    if(check==false){
        cout<<"not ";
    }
}
int main(){
    int arr[]={1,5,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    Check(arr,n);
}