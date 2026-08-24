#include<iostream>
using namespace std;
void Check(int arr[],int n){
    bool sorted=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted=false;
            }
        }
    }
    if(sorted ==true){
        cout<<"ARRAY is SORTED";
    }
    else{
        cout<<"ARRAY is NOT SORTED";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    Check(arr,n);
    return 0;
}