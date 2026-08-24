#include<iostream>
using namespace std;
void Diagonal_Avg(int matrix[][3]){
    int Avg=0;
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                Avg=Avg+matrix[i][j];
                count++;
            }
        }
    }
    cout<<"Avg OF MATIRX DIAGONALS: "<<Avg/count;
}
int main(){
    int matrix[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9,},
    };
    Diagonal_Avg(matrix);
}