#include<iostream>
using namespace std;
void Power_Two(int n){
    bool prove=true;
    int temp=n;
    while(n>1){
        if(n%2!=0){
            prove=false;
            break;
        }
        n=n/2;
    }
    if(prove==false){
        cout<<temp<<" Is not a Power of Two";
    }
    else{
        cout<<temp<<" Is a Power of Two";
    }
}
int main(){
    int n=16;
    Power_Two(n);
}