#include<iostream>
using namespace std;
void lowest_Element(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"LOWEST ELEMENT OF ARRAY IS : "<<min;
}
int main(){
    int arr[]={1,2,3,56,87,23,99,232,45};
    int n=sizeof(arr)/sizeof(int);
    lowest_Element(arr,n);   
}