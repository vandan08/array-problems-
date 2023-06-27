#include <iostream>
using namespace std;

void rot(int num[], int size, int k) {
    // Check whether k is greater than the length of the array
    if (k > size) {
        k = k % size;
    }

    int res[size];

    // Rotate the last k elements to the first
    for (int i = 0; i < size; i++) {
        res[i] = num[(size - k + i) % size];
    }

    // Print the new array
    for (int i = 0; i < size; i++) {
        cout << res[i] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    rot(arr, size, 7);
    return 0;
}
