#include<iostream>
using namespace std;
int COMMON(int arr[],int n,int arr2[],int m){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr2[j]){
                cout<<arr2[j]<<"-->";
            }
        }
    }
    
}
int main(){
    int arr[]={10,20,30,40};
    int arr2[]={20,40,50};
    int n=sizeof(arr)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    COMMON(arr,n,arr2,m);

}