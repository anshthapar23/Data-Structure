#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    int digit;
    int count=0;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        count++;
    }
    cout<<"sum of a number is "<<sum<<endl;;
    cout<<"number  of digit is "<<count;
    return 0;
}