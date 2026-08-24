// Leap year
#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;

    if((year%4==0 && year% 100 !=0) || (year%400==0)){
        cout<<"it is a leap year ";
    }
    else{
        cout<<"it is not a leap year ";
    }
    return 0;

}