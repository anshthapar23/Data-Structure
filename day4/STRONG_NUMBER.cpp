#include <iostream>
using namespace std;

void Strong(int n){
    int temp=n;
    int digit=0;
    int sum=0;
    while(temp>0){
        digit=temp%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;

        }
        sum=sum+fact;
        temp=temp/10;
    }
    cout<<sum<<endl;

    if(n==sum){
        cout<<"STRONG NUMBER";
    }
    else{
        cout<<"NOT A STRONG NUMBER";
    }
}
int main()
{
    int n;
    cout<<"enter: ";
    cin >> n;
    Strong(n);
}