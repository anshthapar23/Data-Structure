#include<iostream>
using namespace std;
#include<cmath>
void no_of_digit(int n){
    int sum=0;
    int digit;
    int count=0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    cout<<count<<endl;
    temp=n;
   while(temp>0){
        digit=temp%10;
        int power=1;
        for(int i=0;i<count;i++){
            power=power*digit;
    }
        sum=sum+power;
        temp=temp/10;
        cout<<sum<<endl<<endl;
    }

    if(n==sum){
        cout<<n<<" is a armstrong";
    }
    else{
        cout<<n<<" is not a armstrong number";
    }
}
int main(){
    int n;
    cin>>n;
    no_of_digit(n);
    return 0;
}