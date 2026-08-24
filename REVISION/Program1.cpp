#include<iostream>
using namespace std;
void Palindrone(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]==arr[end]){
            start++;
            end--;
        }
        else{
            cout<<"It is not a palindrone";
            return;
        }
    }
    cout<<"it is a palindrone array";
}
int main(){
    int arr[]={ 1,2,4,1};
    int n=sizeof(arr)/sizeof(int);
    Palindrone(arr,n);
    return 0;
}