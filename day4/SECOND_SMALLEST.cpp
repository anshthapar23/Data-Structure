#include<iostream>
using namespace std;
void SECOND(int n){
    int digit=0;
    int secondmin;
    int min;
    while(n>0){
        digit=n%10;
        if(digit<min){
            secondmin=min;
            min=digit;
        }
        
        n=n/10;
    }
    cout<<"SECOND_MAX: "<<secondmin<<endl;
}
int main(){
    int n;
    cout<<"ENTER: ";
    cin>>n;
    SECOND(n);

}