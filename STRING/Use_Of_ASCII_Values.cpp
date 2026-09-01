#include<iostream>
using namespace std;
int main(){
    string name="We are learning DSA";
    int n=name.length();
    int upper=0;
    int lower=0;
    int digit=0;
    int special=0;
    int words=1;
    for(int i=0;i<n;i++){
        if(name[i]>=65 && name[i]<=90){
            upper++;
        }
        else if(name[i]>=97 && name[i]<=122){
            lower++;
        }
        else if(name[i]>=48 && name[i]<=57){
            digit++;
        }
        else if(name[i]==' '){
            words++;
        }
        else{
            special++;
        }
    }
    cout<<"Upper Case : "<<upper<<endl;
    cout<<"Lower Case : "<<lower<<endl;
    cout<<"digit Case : "<<digit<<endl;
    cout<<"Special character: "<<special<<endl;
    cout<<"total words: "<<words;
    return 0;
}