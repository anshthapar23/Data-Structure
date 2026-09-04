#include<iostream>
using namespace std;
void Perfect(int n){
    bool Per=false;
    for(int i=0;i<n/2;i++){
        if(i*i==n){
            Per=true;
            break;
        }
    }
    if(Per==true){
        cout<<n<<" is a perfect number . ";
    }
    else{
        cout<<n<<" is not a perfect number . ";
    }
}
int main(){
    int n;
    cout<<"Enter a number to check for a perfect number: "<<endl;
    cin>>n;
    Perfect(n);
}