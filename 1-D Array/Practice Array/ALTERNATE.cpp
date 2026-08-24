#include<iostream>
using namespace std;
void Alternate(int arr[],int n){
    for (int i=0;i<n;i=i+2){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    Alternate(arr,n);
    return 0;
    

}