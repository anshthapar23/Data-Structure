// RQUIRED OUTPUT
/*
- - - 
- - - 
7 8 9 
*/
#include<iostream>
using namespace std;
void last_row(int matrix[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==2){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"- ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    last_row(matrix);
    
}