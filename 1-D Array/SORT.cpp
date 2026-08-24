#include<iostream>
using  namespace std;

void sort(int arr[],int n){
     for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

    }
    cout<<endl;
    cout<<arr[n-2];


}

int main(){
    int arr[]={1,4,7,5,2,9};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,n);
}