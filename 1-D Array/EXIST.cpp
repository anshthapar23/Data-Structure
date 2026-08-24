#include <iostream>
using namespace std;

int search(int arr[], int n, int search_no)
{
    bool find = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search_no)
        {
            cout << "YES " << endl;
            find = true;
        }
    }
    if (find == false)
    {
        cout << "NO";
    }
}

int main()
{
    int arr[] = {7, 14, 21, 18};
    int n = sizeof(arr) / sizeof(int);
    int search_no = 15;
    search(arr, n, search_no);
    return 0;
}