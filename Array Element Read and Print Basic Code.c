#include<stdio.h>
int main(){
    int size;
    printf("Enter Array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d Array Element: ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("The Array Inputed Element : ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
