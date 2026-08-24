
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int count=0;
    for (int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
        
    }
    if(count==0){
        cout<<"it is a prime num";
    }
    else{
        cout<<"not a prime";
    }
    return 0;
}