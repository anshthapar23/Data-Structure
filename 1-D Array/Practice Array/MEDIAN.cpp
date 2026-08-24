#include<iostream>
using namespace std;

void medium(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
    //even
    if(n%2==0){
        cout<<(arr[n/2]+arr[(n/2)-1])/2.0;
        
    }
    //odd
    else{
        cout<<arr[n/2];
    }
}

int main(){
    int arr[]={1,4,3,2,5,6};
    int n=sizeof(arr)/sizeof(int);
    medium(arr,n);

    return 0;
}