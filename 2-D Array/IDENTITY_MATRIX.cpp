#include<iostream>
using namespace std;
void Identity_Matrix(int matrix[3][3]){
    bool identity=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j && matrix[i][j]!=1){
                identity=false;
                break;
            }
            else if(i!=j && matrix[i][j]!=0){
                identity=false;
                break;
            }
        }
    }
    if(identity==false){
        cout<<"The matrix is not an identity matrix.";
    }
    else{
        cout<<"The matrix is an identity matrix.";
    }
}
int main(){
    int matrix[][3]={
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };
    
    Identity_Matrix(matrix);
}