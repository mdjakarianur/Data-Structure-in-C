#include <stdio.h>   
int linearSearch(int arr[], int n, int target) {  
    int i;  
    for (i = 0; i< n; i++) {  
        if (arr[i] == target) {  
            return i;
        }  
    }  
    return -1;
}  
int main() {  
    int arr[] = {10, 2, 8, 5, 17};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int target = 8;  
    int result = linearSearch(arr, n, target);  
    if (result == -1) {  
printf("Element not found in the array.\n");  
    } else {  
printf("The target Element %d is found at index: %d\n", target,result);  
    }  
    return 0;  
} 
