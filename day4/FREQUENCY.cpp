#include<iostream>
using namespace std;
void SECOND(int n){
    int digit=0;
    int check=2;
    int count=0;
    while(n>0){
        digit=n%10;
        if(digit==check){
            count++;
        }
        n=n/10;
    }
    cout<<"FREQUENCY: "<<count;
}
int main(){
    int n;
    cout<<"ENTER: ";
    cin>>n;
    SECOND(n);

}