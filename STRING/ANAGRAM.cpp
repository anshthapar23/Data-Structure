#include<iostream>
using namespace std;

void anagram_string(string name, int n,string name2){
    bool anagram = false;

    for(int i = 0; i < n/2; i++){
        for(int j=0;j<name2.length();j++){
            if(name[i] == name2[j]){
            anagram = true;
            break;
        }
    }   
    }

    if(anagram == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

int main(){
    string name = "ACT";
    string name2="CAT";
    int n = name.length();
    if(n==name2.length()){
    anagram_string(name, n,name2);
    }
    return 0;
}