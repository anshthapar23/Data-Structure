#include<iostream>
using namespace std;
void Spy(int n){
    int sum=0;
    int product=1;
    int digit=0;
    int temp=n;
    while (temp>0)
    {
        digit=temp%10;
        sum=sum+digit;
        product=product*digit;
        temp=temp/10;
    }
    if(sum==product){
        cout<<n<<" is a Spy Number";
    }
    else{
        cout<<n<<" is not a Spy Number";
    }
    }
    
int main(){
    int n=123;
    Spy(n);
    return 0;
}