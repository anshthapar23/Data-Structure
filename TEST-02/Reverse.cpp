#include<iostream>
using namespace std;
void Reverse(int n){
    int digit=0;
    int sum=0;
    while(n>0){
        digit=n%10;
        n=n/10;
        sum=sum*10+digit;
    }
    cout<<sum;
}
int main(){
    int n=123;
    Reverse(n);
}