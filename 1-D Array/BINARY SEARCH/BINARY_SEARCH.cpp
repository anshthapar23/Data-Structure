#include<iostream>
using namespace std;
void BinarySearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int mid=0;
    while(low<=high){
        mid=(low+high)/2 ;
        if(arr[mid]==target){
            cout<<"found at index "<<mid;
            return;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int target;
    cout<<"enter your target: ";
    cin>>target;
    BinarySearch(arr,n,target);
    return 0;
}