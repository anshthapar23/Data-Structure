#include<iostream>
using namespace std;
void Positive_Matrix(int matrix[3][3]){
    bool positive=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]<0){
                positive=false;
                break;
            }
        }
    }
    if(positive==false){
        cout<<"The matrix is not positive.";
    }
    else{
        cout<<"The matrix is positive.";

    }
}
int main(){
    int matrix[3][3]={{1,-2,3},{4,5,6},{7,8,9}};
    Positive_Matrix(matrix);
}