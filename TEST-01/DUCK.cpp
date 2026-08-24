#include<iostream>
using namespace std;
void Duck(int n){
    int digit=0;
    bool check=false;
    int temp=n;
    while(n>0){
        digit=n%10;
        if(digit==0){
            check=true;
            break;
        }
        n=n/10;
    }
    if(check==true){
        cout<<temp<<" is a Duck Number";
    }
    else{
        cout<<temp<<" is not a Duck Number";
    }

}

int main(){
    int n=1024;
    Duck(n);
    return 0;
}