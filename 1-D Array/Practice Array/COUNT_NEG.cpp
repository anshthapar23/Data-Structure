#include <iostream>
using namespace std;
void Neg_count(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    cout<<"NEGATIVE ELEMENT IN ARRAY: "<<count;
}
int main(){
    int arr[]={10,20,-1,23,-1,23,-4,-8};
    int n=sizeof(arr)/sizeof(int);
    Neg_count(arr,n);
    return 0;
}