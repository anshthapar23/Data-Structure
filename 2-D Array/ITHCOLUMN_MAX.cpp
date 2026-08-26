#include<iostream>
using namespace std;
void Column_Largest(int matrix[3][3],int col){
    int largest=matrix[0][col];
    for(int i=0;i<3;i++){
            if(matrix[i][col]>largest){
                largest=matrix[i][col];
            }
    }
    cout<<"Largest element in the matrix is: "<<largest;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,6,5},{9,10,5}};
    int col;
    cout<<"Enter the col number: ";
    cin>>col;
    Column_Largest(matrix,col);
}