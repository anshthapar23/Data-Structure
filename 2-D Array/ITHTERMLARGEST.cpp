#include<iostream>
using namespace std;
void I_th_Largest(int matrix[3][3],int row){
    int largest=matrix[row][0];
    for(int i=0;i<3;i++){
            if(matrix[row][i]>largest){
                largest=matrix[row][i];
            }
        }
    cout<<"Largest element in the matrix is: "<<largest;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,6,5},{9,10,5}};
    int row;
    cout<<"Enter the row number: ";
    cin>>row;
    I_th_Largest(matrix,row);
}