#include<iostream>
using namespace std;
void table(){
    for(int i=2;i<=10;i++){
        cout<<"_________________________________________________________________________________________"<<endl;
        cout<<"Table of "<<i<<endl;
        for (int j=1;j<=10;j++){
            cout<<i<<" X "<<j<<" = "<<i*j<<endl;
        }
    }

}
int main(){
    table();
    return 0;

}