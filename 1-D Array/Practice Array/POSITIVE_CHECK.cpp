#include<iostream>
using namespace std;
int POS_Check(int arr[],int n){
    int check=true;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            check=false;
            break;
        }
    }
    if(check==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}
int main(){
    int arr[]={5,8,-4,3,2};
    int n=sizeof(arr)/sizeof(int);
    POS_Check(arr,n);

}