#include<iostream>
using namespace std;
void Harshad(int n){
    int digit=0;
    int sum=0;
    int temp=n;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    if(temp%sum==0){
        cout<<temp<<" is a Harshad Number";
    }
    else{
        cout<<temp<<" is not a Harshad Number";
    }
}
int main(){
    int n=13;
    Harshad(n);
    return 0;
}