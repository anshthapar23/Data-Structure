// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,3,2,5,2,7,3,8,5};
//     int n=9;

//     int freq[10]={0};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     int print[10]={0};
//     cout<<"duplicate: ";
//     for(int i=0;i<n;i++){
//         if(freq[arr[i]]>0 ){
//             cout<<arr[i]<<" :  "<<freq[arr[i]]<<endl;
//             freq[arr[i]]=-1;
//         }

//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,2,5,2,7,3,8,5};
    int n=9;

    int freq[10]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int count=0;
    int max=freq[0];
    int prof=0;
    for(int i=0;i<n;i++){
        if(freq[i]>1){
            if(max<freq[i]){
                max=freq[i];
                prof=i;

            }
        }

    }
    cout<<"max occur element frequency: "<<prof;
    return 0;
}