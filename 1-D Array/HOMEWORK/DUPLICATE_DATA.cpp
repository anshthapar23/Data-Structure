#include<iostream>
using namespace std;
void Duplicate(int arr[],int n){
    cout<<"[ ";
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<" ]";
}
int main(){
    int arr[]={7,2,3,4,5,4,5,1,0};
    int n=sizeof(arr)/sizeof(int);
    Duplicate(arr,n);
    return 0;
}