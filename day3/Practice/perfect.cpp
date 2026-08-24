#include<iostream>
using namespace std;
int main(){
    int sum;
    for(int i=2;i<=1000;i++){
        sum=0;
        for(int j=1;j<= i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
    }
        if(sum==i){
            cout<<i<<" ";
        }

    }
    return 0;
}
