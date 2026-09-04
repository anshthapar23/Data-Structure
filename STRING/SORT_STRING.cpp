#include<iostream>
using namespace std;
void bubble(string name,string name2){
    for(int i=0;i<name2.length();i++){
        for(int j=0;j<name.length();j++){
            if(name2[i]<name2[j]){
                swap(name2[i],name2[j]);
            }

        }
    }
    cout<<endl<<name2;
}

int main(){
    string name = "ACT";
    string name2="CAT";
    int n = name.length();
    
    bubble(name, name2);
    return 0;
}