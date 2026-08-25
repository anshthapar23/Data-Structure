#include<iostream>
using namespace std;
void Diagonal_Sum(int matrix[][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum=sum+matrix[i][j];
            }
        }
    }
    cout<<"SUM OF MATIRX DIAGONALS: "<<sum;
}
int main(){
    int matrix[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9,},
    };
    Diagonal_Sum(matrix);
}