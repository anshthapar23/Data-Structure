#include<iostream>
using namespace std;
int COPY(int arr[],int n, int app[]){
    for(int i=0;i<n;i++){
        app[i]=arr[i];
    }

}

int display(int arr[], int app[],int n){
    cout<<"Original Array = [";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"COPIED Array = [";
     for(int i=0;i<n;i++){
        cout<<app[i]<<" ";
    }
    cout<<"]"<<endl;

}
int main(){
    int arr[]={5,10,15,20};
    
    int n=sizeof(arr)/sizeof(int);
    int app[n]={0};
    COPY(arr,n,app);
    display(arr,app,n);
    return 0;

}