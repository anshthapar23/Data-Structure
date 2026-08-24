#include<iostream>
using namespace std;

void INDEX(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i]==search ){
            if(i%2==0){
            cout<<arr[i]<<"is at "<<i<<"even index";
            }
            else{
                cout<<arr[i]<<" is at "<<i<<" odd index";

            }
        }
    }   

}

int main(){
    int arr[]={10,20,8,40};
    int n=sizeof(arr)/sizeof(int);
    int search=20;
    INDEX(arr,n,search);
    return 0;
}