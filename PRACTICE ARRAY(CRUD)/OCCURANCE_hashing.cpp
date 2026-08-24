#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr) / sizeof(int);

    int freq[10] = {0};
    int search = 2;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    cout<<search<<" occurs "<< freq[search]<<" times";

    return 0;
}
