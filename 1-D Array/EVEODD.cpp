#include <iostream>
using namespace std;

int Even_odd(int arr[], int n)
{
    int even=0;
    int odd=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            even++;
            
        }
        else{
            odd++;
            
        }
    }
    cout<<"EVEN:"<<even<<endl;
    cout<<"ODD:"<<odd<<endl;


}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    Even_odd(arr, n);
}