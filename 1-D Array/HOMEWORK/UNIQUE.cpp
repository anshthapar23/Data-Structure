#include<iostream>
using namespace std;
void Duplicate(int arr[],int n){
    bool check=true;
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]!=arr[j]){
                check=false;
                return;
            }
        }
    }
}
int main(){
    int arr[]={2,3,4,5,3,4,5,2};
    int n=sizeof(arr)/sizeof(int);
    Duplicate(arr,n);
    return 0;
}