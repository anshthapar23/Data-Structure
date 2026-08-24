#include <iostream>
using namespace std;
void Occurance_Of_Element(int arr[], int n, int search)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }
    cout << search << " Occurs " << count << " times in an array . ";
}
int main()
{
    int arr[] = {1, 4, 56, 2, 89, 89, 89, 89, 69};
    int n = sizeof(arr) / sizeof(int);
    int search = 89;
    Occurance_Of_Element(arr, n, search);
}