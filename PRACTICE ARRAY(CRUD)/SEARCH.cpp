#include<iostream>
using namespace std;
void Find_Element(int arr[],int n,int search){
    bool find=false;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            cout<<"Element found at index : "<<i;
            find=true;
            break;
        }

    }
    if(find==false){
        cout<<"Element not found ";
    }
}
int main(){
    int arr[]={1,4,56,2,89,69};
    int n=sizeof(arr)/sizeof(int);
    int search=3;
    Find_Element(arr,n,search);
}