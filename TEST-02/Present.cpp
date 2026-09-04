#include<iostream>
using namespace std;
void Find(int arr[],int n,int target){
    bool check=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            check=true;
            
            break;
        }
    }
    if(check==true){
        cout<<"element is present in array ";
    }
    else{
        cout<<"element is not  present in array ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int target=3;
    int n=sizeof(arr)/sizeof(int);
    Find(arr,n,target);
}