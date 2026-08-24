#include<iostream>
using namespace std;
void Sum_Avg(int matrix[3][3]){
    float sum=0;
    float avg=0;
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+matrix[i][j];
            count++;
        }
    }
    cout<<"Sum of matrix : "<<sum<<endl;;
    avg=sum/count;
    cout<<"Avg Of matrix : "<<avg;
}
int main(){
         // row col
    int matrix[][3]={
        {1,2,3},
        {4,5,6}, 
        {7,8,9}
    };
    Sum_Avg(matrix);
    return 0;
}