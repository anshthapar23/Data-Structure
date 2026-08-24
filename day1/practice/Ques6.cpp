// Leap year
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number:";
    cin>>n;
    int product=1;
    for (int i = 1; i <n; i++)
    {
        if(n%i==0){
            cout<<i<<" "; 
            product=product*i;
        }

    }
    cout<<endl;
    cout<<"sum: "<<product<<endl;
    if(product==n){
        cout<<"it is a unique perfect number";
    }
    else{
        cout<<"it is not a uniqproductperfect number ";
    }

    return 0;
}