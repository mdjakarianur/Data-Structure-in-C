#include <stdio.h>

int main() {
    int i, size1, size2;
    
    printf("Enter First Array Size: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter First Array Alements: ");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("The Array Element Are: \n");
    for(i=0;i<size1;i++){
        printf("%d ", arr1[i]); 
    }
    printf("\nEnter Second Array Size: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter Second Array Elements: ");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("The Array Element Are: \n");
    for(i=0;i<size2;i++){
        printf("%d ", arr2[i]); 
    }
    int merged[size1 + size2];
    
    for(i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for(i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    printf("\nThe Merged Array Element Are: \n");
    for(i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
