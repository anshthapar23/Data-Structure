#include<iostream>
using namespace std;
void SECOND(int n){
    int digit=0;
    int secondmax=0;
    int max=0;
    while(n>0){
        digit=n%10;
        if(digit>max){
            max=digit;
        }
        else if(secondmax<digit && digit<max){
            secondmax=digit;
        }
        n=n/10;
    }
    cout<<"SECOND_MAX: "<<secondmax<<endl;
}
int main(){
    int n;
    cout<<"ENTER: ";
    cin>>n;
    SECOND(n);

}