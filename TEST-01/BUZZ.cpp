#include<iostream>
using namespace std;
void Duck(int n){
    bool check=false;
    if(n%7==0 || n%10==7){
        cout<<n<<" is a Buzz Number";
    }
    else{
        cout<<n<<" is not a Buzz Number";
    }

}

int main(){
    int n=27;
    Duck(n);
    return 0;
}