#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        int max_idx = i;
        int min_idx = i + 1;
        for (int j = i + 2; j < n; j += 2) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
            if (arr[j + 1] > arr[min_idx]) {
                min_idx = j + 1;
            }
        }
        if (arr[max_idx] > arr[i]) {
            std::swap(arr[i], arr[max_idx]);
        }
        if (arr[min_idx] > arr[i + 1]) {
            std::swap(arr[i + 1], arr[min_idx]);
        }
    }
}

int main() {
    int arr[] = { 1, 3, 1, 4, 5, 2, 7, 2, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
