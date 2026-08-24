#include<iostream>
using namespace std;
void EVEN_ODD_ELEMENT(int arr[],int n){
    int even=0;
    int odd=0;
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;

        }
        else{
            odd++;
        }
    }
    cout<<"TOTAL EVEN ELEMENTS IN ARRAY IS: "<<even<<endl;
    cout<<"TOTAL ODD ELEMENTS IN ARRAY IS: "<<odd;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    EVEN_ODD_ELEMENT(arr,n);
}