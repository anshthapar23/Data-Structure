#include<iostream>
using namespace std;
bool Count_Prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    cout<<"Enter a range : "<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(Count_Prime(i)){
             count++;
             cout<<i<<" ";
    }
    }
    cout<<endl;
    cout<<"total: "<<count;
}