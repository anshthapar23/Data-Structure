// Leap year
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number:";
    cin>>n;
    int sum=0;
    for (int i = 1; i <n; i++)
    {
        if(n%i==0){
            cout<<i<<" "; 
            sum=sum+i;
        }

    }
    cout<<endl;
    cout<<"sum: "<<sum<<endl;
    if(sum==n){
        cout<<"it is a perfect number";
    }
    else{
        cout<<"it is not a perfect number ";
    }

    return 0;
}