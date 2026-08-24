#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int n1=0;
    int n2=1;
    int next;
    if(n==n1){
        cout<<n1;
    }
    else if(n==n2){
        cout<<n2;
    }
    else{
    for(int i=2;i<=n;i++){
        next=n1+n2;
        n1=n2;
        n2=next;
    }}
    cout<<n1;
    return 0;
}