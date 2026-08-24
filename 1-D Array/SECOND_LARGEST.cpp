#include<iostream>
using  namespace std;

void SECOND_LARGEST(int arr[],int n){
    int second_max=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        {
            second_max=max;
            max=arr[i];
        }
    }
    cout<<endl;
    cout<<second_max;


}

int main(){
    int arr[]={1,4,7,5,2,9};
    int n=sizeof(arr)/sizeof(int);
    SECOND_LARGEST(arr,n);
}