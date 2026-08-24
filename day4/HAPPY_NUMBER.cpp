#include<iostream>
using namespace std;
void Happy(int n){
    int temp=n;
    while(temp!=1 && temp!=4){
        int sum=0;

        while(temp>0){
            int digit=temp%10;
            sum=sum+digit*digit;
            temp=temp/10;
        }
        temp=sum;
    }
    if(temp==1){
        cout<<n<<" is a Happy Number";
    }
    else{
        cout<<n<<" is not a Happy number";
    }
}
int main(){
    int n=100;
    for(int i=0;i<n;i++){
    Happy(i);
    }
    return 0;
}