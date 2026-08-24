#include<iostream>
using namespace std;

int frequency(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int first = -1;
    int last = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
        {
            first = mid;
            high = mid - 1; 
        }
        else if(target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
        {
            last = mid;
            low = mid + 1; 
        }
        else if(target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last-first+1;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;

    cout << "Frequency = " << frequency(arr, n, target);

    return 0;
}