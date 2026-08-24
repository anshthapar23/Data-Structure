#include <iostream>
using namespace std;

void Strong(int n){
    int digit=0;
    digit=n%10;
    cout<<"LAST DIGIT: "<<digit<<endl;
    while(n>0){
        digit=n%10;
        n=n/10;
    }
    cout<<"FIRST DIGIT: "<<digit<<endl;
}
int main()
{
    int n;
    cout<<"enter: ";
    cin >> n;
    Strong(n);
}