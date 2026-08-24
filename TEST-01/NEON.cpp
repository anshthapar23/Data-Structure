#include<iostream>
using namespace std;
void Neon(int n){
    int square=0;
    square=n*n;
    int temp=square;
    int digit=0;
    int sum=0;
    while(temp>0){
        digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    if(sum==n){
        cout<<n<<" is a Neon Number, "<<"as square of "<<n<<" = "<<square<<" , sum of digits of "<<square<<" = "<< sum;
    }
    else{
        cout<<n<<" is not a Neon Number";
    }
}

int main(){
    int n=9;
    Neon(n);
    return 0;
}