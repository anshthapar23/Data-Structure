#include<iostream>
#include<conio.h>
using namespace std;

int update(int arr[],int n, int update_no , int new_no){
    for(int i=0;i<n;i++){
        if(arr[i]==update_no){
            arr[i]==new_no;
        }
    }

}

int display(int arr[], int n){
    cout<<"[";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"]";
}

int main(){
    int arr[]={10,20,30,20,40};
    int n=sizeof(arr)/sizeof(int);
    int update_no=20;
    int new_no=99;
    update(arr,n,update_no, new_no);
    display(arr,n);
    getch();
    return 0;
}