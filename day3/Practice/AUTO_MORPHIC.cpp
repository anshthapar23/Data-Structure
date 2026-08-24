#include <iostream>
using namespace std;

void AUTO_MORPHIC(int n){
    int square=0;
    square=n*n;
    cout<<"square: "<<square<<endl;
    int temp=n;
    int count=0;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    cout<<"count: "<<count<<endl;
    int mod=1;
    for(int i=0;i<count;i++){
        mod=mod*10;
    }
    cout<<"mod : "<<mod<<endl;
    if(square%mod==n){
        cout<<"IT IS A AUTO-MORPHIC NUMBER";

    }
    else{
        cout<<"NO";
    }
    }
int main()
{
    int n;
    cout<<"enter: ";
    cin >> n;
    AUTO_MORPHIC(n);
}