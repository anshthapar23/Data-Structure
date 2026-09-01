#include<iostream>
using namespace std;
void Rotate(int matrix[][3]){
    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;}
}
int main(){
    int matrix[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    Rotate(matrix);
}