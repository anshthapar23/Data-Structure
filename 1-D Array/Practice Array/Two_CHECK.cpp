#include<iostream>
using namespace std;
int check(int arr[],int n,int arr2[]){
    int check=true;
    
        for(int i=0;i<n;i++){
            if(arr[i]!=arr2[i]){
                check=false;
                break;
            }
        }
    
    if(check==false){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    if(m==n){
    check(arr,n,arr2);
    }
    cout<<"Array are not equal";

}