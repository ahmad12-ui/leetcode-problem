#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 7, 11, 2};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << " , " << j << endl;
                return 0; // stop after finding the solution
            }
        }
    }
}

