#include<iostream>
using namespace std;
void Highest_Element(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"HIGHEST ELEMENT OF ARRAY IS : "<<max;
}
int main(){
    int arr[]={1,2,3,56,87,23,99,232,45};
    int n=sizeof(arr)/sizeof(int);
    Highest_Element(arr,n);   
}