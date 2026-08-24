// Wap to find the greatest among the 3 given numbers with/without using logical operators 

// WITHOUT LOGICAL OPERATOR   

#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"enter threee numbers :";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"is the greatest";
        }
        else{
            cout<<c<<"is the greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<"is the greatest";
        }
        else{
            cout<<c<<"is the greatest";
        }
        return 0;
    }

 

    // if(a>b && a>c){
    //     cout<<"the greatest among three is "<<a;
    // }
    // else if(b>a && b>c){
    //     cout<<"the greatest among three is "<<b;
    // }
    // else{
    //     cout<<"the greatest among three is "<<c;
    // }
    // return 0;'


}