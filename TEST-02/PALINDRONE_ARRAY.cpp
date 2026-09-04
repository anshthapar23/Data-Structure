#include<iostream>
using namespace std;
void Palindrone(int arr[],int n){
    bool check =true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            check=false;
            break;
        }
    }
    if(check==true){
        cout<<"Given Array is palindorne";
    }
    else{
        cout<<"Given Array is not palindrone";
    }
}
int main(){
    int arr[]={1,1,2,1};
    int n=sizeof(arr)/sizeof(int);
    Palindrone(arr,n);
}