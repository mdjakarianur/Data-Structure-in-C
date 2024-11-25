#include <stdio.h>  
int main(){  
int i, size;  
printf("Enter any array size: ");  
scanf(“%d”,&size); 
int arr[size];  
printf("Enter %d Numbers: ", size);  
for(i=0; i<size; i++){  
scanf("%d", &arr[i]);
}
printf("The Array Element Are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
printf("\nThe Minimum Number Is: ");  
int minimum = arr[0];  
for(i=1; i<size; i++)
{  
if(arr[i] < minimum)
    {
     minimum=arr[i];
    }
}  
printf("%d", minimum);  
return 0;
}
