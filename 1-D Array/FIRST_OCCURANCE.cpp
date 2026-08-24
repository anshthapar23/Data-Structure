#include<iostream>
using namespace std;

void occurance(int arr[],int n, int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            cout<<"First occurance at index"<<" "<<i;
            return;
        }
    }

}
int main(){
    int arr[]={5,8,3,8,10};
    int n=sizeof(arr)/sizeof(int);
    int element=8;
    occurance(arr,n,element);

}