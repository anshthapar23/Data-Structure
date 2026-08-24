#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubble_sort(int arr[], int n)
{
    bool swapped = false;
    int total = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
                swapped = true;
            }
            if (swapped == false)
            {
                break;
            }
        }

        cout << "After " << i + 1 << " passes : " << endl;
        ;
        display(arr, n);
        cout << endl;

        total++;
    }
    cout << total << "passes";
    cout << endl
         << count << " swaps";
}

int main()
{
    int arr[] = {2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    return 0;
}