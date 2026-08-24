#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a numbwer";
    cin>>n;
    int temp=n;
    int sum=0;
    int digit;
    while(n>0){
        digit =n%10;
        sum=sum*10+digit;
        n=n/10;

    }
    if(temp==sum){
        cout<<"IT IS A PALINDRONE ";
    }
    else{
        cout<<"IT IS NOT A PALINDRONE";
    }
    return 0;

}