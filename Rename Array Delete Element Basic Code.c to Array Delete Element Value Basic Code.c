#include <stdio.h>
int main() {
    int arr[100],i,size,value,count=0;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    printf("Enter %d Array Element: ", size);
    for(i=0;i<size;i++){
    scanf("%d", &arr[i]);
    }
    printf("The Array Element Are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
    printf("\nEnter the value do you want to delete ? : ");
    scanf("%d",&value);
    for(i=0;i<size;i++){
        if(value ==arr[i]){
            break;
        }
        count++;
    }
    for(int i =count;i<size-1;i++){
        arr[i] = arr[i+1]; 
    }
    size --;
    printf("Array Element After Value Deletion: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
