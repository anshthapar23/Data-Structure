#include<iostream>
using namespace std;
void Symmetry(int matrix[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]!=matrix[j][i]){
                cout<<"IT IS NOT A SYMMETRIC MATRIX";
                break;
            }
        }
    }
 }


int main(){
    int matrix[3][3]={
        {1,2,3},
        {2,4,5},
        {3,5,6}
    };
    /* dry run--------
        1 2 3          1 2 3
        2 4 5     =    2 4 5 
        3 5 6          3 5 6
        this is a symmetric matirx (matrix==transpose)
    */
   
    Symmetry(matrix); 
}