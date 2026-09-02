#include<iostream>
using namespace std;
int main(){
    string mess="JavA PrograMinG @90 DayS";
    for (int i = 0; i < mess.length(); i++)
    {
        if (mess[i] >= 97 && mess[i] <= 122)
        {
            mess[i] = mess[i] - 32;
        }
        else if(mess[i]>=65 && mess[i]<=90){
            mess[i]=mess[i]+32;
        }
    }
    cout<<mess;
    return 0;
}