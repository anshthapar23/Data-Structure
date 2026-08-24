#include<iostream>
using namespace std;
int indexing(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            return i;
        }
    }
    return -1;
}
int Delete(int arr[],int n,int target){
    int index=indexing(arr,n,target);
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;


}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,6,5,4,0,8};
    int n=sizeof(arr)/sizeof(int);
    int target=5;
    display(arr,n);
    Delete(arr,n,target);
    n=n-1;
    display(arr,n);
    return 0;


}