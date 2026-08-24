#include<iostream>
using namespace std;

void Integer(int arr[],int n){
    int pos=0;
    int neg=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;

        }
        else{
            zero++;
        }
    }
    cout<<"POSITIVE:= "<<pos<<endl;
    cout<<"NEGATIVE:= "<<neg<<endl;
    cout<<"ZERO:= "<<zero<<endl;

}
int main(){
    int arr[]={-2,0,5,-7,8,0,10};
    int n=sizeof(arr)/sizeof(int);
    Integer(arr,n);

}