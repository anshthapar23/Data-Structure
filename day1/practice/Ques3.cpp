#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count =0;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            cout<<i<<" "; 
            count++;
            sum=sum+i;
        }

    }
    cout<<"count: "<<count;
    cout<<"sum: "<<sum;

    return 0;
}