#include <iostream>
using namespace std;
void check(int arr[], int n){
    bool count = false;
    for(int i = n-1; i > 0; i--){
        if(arr[i] > arr[i+1]){
            count = true;
            break;
        }
    }
    if(count==true)
        cout << "true";
    else
        cout << "false";
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    check(arr,n);
    return 0;
}