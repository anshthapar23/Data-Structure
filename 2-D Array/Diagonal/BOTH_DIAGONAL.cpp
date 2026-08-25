#include<iostream>
using namespace std;
//using col because 2d array use index of i , j 
//like this 
/* 
  00 01 02
  10 11 12
  21 22 23
*/
void Both_Diagonals(int matrix[][3]){
    int col=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j==col-1  || i==j){
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
    Both_Diagonals(matrix);
}