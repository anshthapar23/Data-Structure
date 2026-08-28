#include<iostream>
using namespace std;
/*transpose matrix is row changes with column
ex-
1 2 3
4 5 6
7 8 9
(transporsed matrix is this :-)
1 4 7
2 5 8
3 6 9
*/
void Transpose(int matrix[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    Transpose(matrix);
}