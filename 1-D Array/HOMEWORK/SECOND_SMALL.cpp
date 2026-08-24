#include<iostream>
using namespace std;
void Check(int arr[],int n){
    int small=arr[0];
    int second_small=arr[1];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small)
        {
            second_small = arr[i];
        }
    }
    cout<<"SECOND SMALLEST VALUE IS: "<<second_small;
}
int main(){
    int arr[]={2,1,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    Check(arr,n);
    return 0;
}