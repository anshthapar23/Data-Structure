#include<iostream>
using namespace std;
void Traverse(int matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"- ";
            }
            }
        cout<<endl;
    }
}
void Max_Leading_Diagonal(int matrix[3][3]){
    int max=matrix[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                if(matrix[i][j]>max){
                    max=matrix[i][j];
                }
            }
        }
    }
    cout<<"Max Leading Diagonal: "<<max;
}
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    Traverse(matrix);
    Max_Leading_Diagonal(matrix);
}