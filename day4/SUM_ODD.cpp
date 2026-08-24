#include<iostream>
using namespace std;
void ODD(int n){
    int digit=0;
    int check=2;
    int count=0;
    int sum=0;
    while(n>0){
        digit=n%10;
        if(digit%2!=0){
            sum=sum+digit;
        }
        n=n/10;
    }
    cout<<"EVEN DIGIT SUM : "<<sum;
}
int main(){
    int n;
    cout<<"ENTER: ";
    cin>>n;
    ODD(n);

}