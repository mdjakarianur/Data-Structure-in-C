#include <stdio.h>
int main(){
int arr[100], i, size, search, count=0;
printf("Enter Array Size: ");
scanf("%d",&size);
printf("Enter %d Array Element: ", size);
for(i=0;i<size;i++)
{
    scanf("%d", &arr[i]);
}
printf("The Array Element Are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
printf("\nEnter the element you want to search for: ");
scanf("%d", &search);
for(i=0;i<size;i++)
{
    if (arr[i]==search)
    {
        count++;
        break;
    }
}
    if (count==1)
    {
        printf("Element Found\n");
    }
        else printf("Element is not Found\n");
    return 0;
}
