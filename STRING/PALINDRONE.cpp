#include<iostream>
using namespace std;

void palindrome_string(string name, int n){
    bool palindrome = true;

    for(int i = 0; i < n/2; i++){

        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + 32;
        }

        if(name[n-i-1] >= 'A' && name[n-i-1] <= 'Z'){
            name[n-i-1] = name[n-i-1] + 32;
        }

        if(name[i] != name[n-i-1]){
            palindrome = false;
            break;
        }
    }

    if(palindrome == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

int main(){
    string name = "mADaM";
    int n = name.length();

    palindrome_string(name, n);

    return 0;
}


/*

malayalam
start=i
end=n-1-i

s=1
end=8
m=m

s=2
end=7
a=a

s=3
end=6
l=l

s=4
end=5
a=a

s=5
end=4
terminate(n/2 times loop run )

*/