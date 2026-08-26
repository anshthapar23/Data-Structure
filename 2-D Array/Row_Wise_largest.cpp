#include<iostream>
using namespace std;
void Row_Wise(int matrix[][3]){
    for(int row=0;row<3;row++){
        int largest=matrix[row][0];
        for(int col=0;col<3;col++){
            if(matrix[row][col]>largest){
                largest=matrix[row][col];
            }
        }
        cout<<"largest element of row "<<row+1<<" is "<<largest<<endl;
    }
}
int main(){
    int matrix[][3]={
        {1,6,3},
        {4,15,6},
        {7,24,9}
    };
    Row_Wise(matrix);
}