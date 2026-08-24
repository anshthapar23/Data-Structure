#include<iostream>
using namespace std;

int search(int arr[],int n, int search_no){
    bool find=false;
    for(int i=0;i<n;i++){
        if(arr[i]==search_no){
            cout<<"Element found at index "<<i<<endl;
            find=true;
        }
    }
    if(find==false){
            cout<<"element not found";

    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int search_no=30;
    search(arr,n,search_no);
    return 0;
}