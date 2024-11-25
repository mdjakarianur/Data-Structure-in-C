#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; 
        }

        if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 5, 8, 10, 17}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8; 
    int result = binarySearch(arr, size, target);
    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}
