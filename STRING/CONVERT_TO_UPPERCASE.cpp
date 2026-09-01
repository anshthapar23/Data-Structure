#include<iostream>
using namespace std;
void Convert_Uppercase(string name){
    for(int i=0;i<name.length();i++){
        if(name[i]>=97 && name[i]<=122){
            name[i]=name[i]-32;
        }

    }
    cout<<name;
}
int main(){
    string name="I am aNsH thaPar";
    Convert_Uppercase(name);
    return 0;
}