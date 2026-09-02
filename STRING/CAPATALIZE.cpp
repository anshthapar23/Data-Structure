#include<iostream>
using namespace std;

int main(){
    string name = "my name is ansh thapar";

    for(int i = 0; i < name.length(); i++){
        if(i == 0 || (name[i-1] == ' ')){
            if(name[i] >= 'a' && name[i] <= 'z'){
                name[i] -= 32;
            }
        }
    }

    cout << name;
}