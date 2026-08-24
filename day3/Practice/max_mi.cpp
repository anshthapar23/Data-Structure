#include<iostream>
using namespace std;
//function
int no_of_digit(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
}
    return count;
}
//main body
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int count=no_of_digit(n);

    int digit;

    for(int i=0;i<=count/2;i++){
        digit=n%10;
        n=n/10;
    }

    cout<<digit;
    return 0;
}