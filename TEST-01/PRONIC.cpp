#include<iostream>
using namespace std;
void Pronic(int n){
    int check=false;
    for(int i=0;i<n;i++){
        if(i*(i+1)==n){
            check=true;
            break;
        }
    }
    if(check==false){
        cout<<n<<" is not a pronic number";
    }
    else{
        cout<<n<<" is a pronic number";
    }
}

int main(){
    int n=110;
    Pronic(n);
    return 0;
}