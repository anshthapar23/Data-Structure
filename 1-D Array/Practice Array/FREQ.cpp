#include<iostream>
using namespace std;
void Freq(int arr[],int n, int target){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"target occur"<<count<<" times";
}
int main(){
    int arr[]={10,20,10,30,10,40,10,60};
    int n=sizeof(arr)/sizeof(int);
    int target=10;
    Freq(arr,n,target);
}