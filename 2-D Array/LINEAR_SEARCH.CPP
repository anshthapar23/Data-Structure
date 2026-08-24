// #include<iostream>
// using namespace std;
// bool Search(int matrix[][3],int target){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(matrix[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int matrix[][3]{
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int target=6;
//     cout<<Search(matrix,target);
//     return 0;
// }



// ----------------------USING  STRING----------------------------------------------
#include<iostream>
using namespace std;
string Search(int matrix[][3],int target){
    string result="";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]==target){
                result=result +"[" + to_string(i) + "," + to_string(j) + "]";
                return result;
            }
        }
    }
}
int main(){
    int matrix[][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target=6;
    cout<<Search(matrix,target);
    return 0;
}