#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int n1=0;
    int n2=1;
    int next;
    while(n>0){
        cout<<n1<<" ";
        next=n1+n2;
        n1=n2;
        n2=next;
        n--;
    }
    return 0;
}