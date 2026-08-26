#include<iostream>
using namespace std;
void Col_Wise(int matrix[][3]){
    for(int col=0;col<3;col++){
        int largest=matrix[0][col];
        for(int row=0;row<3;row++){
            if(matrix[row][col]>largest){
                largest=matrix[row][col];
            }
        }
        cout<<"largest element of column "<<col+1<<" is : "<<largest<<endl;
    }
}
int main(){
    int matrix[][3]={
        {1,6,3},
        {54,15,78},
        {40,24,9}
    };
    Col_Wise(matrix);
}