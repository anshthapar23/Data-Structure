#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a numbwer";
    cin>>n;
    int temp=n;
    int sum=0;
    int digit;
    int rev;
    while(n>0){
        digit =n%10;
        sum=sum*10+digit;
        n=n/10;

    }
    cout<<"rev of number "<<temp<<" is "<<sum;
    return 0;

}