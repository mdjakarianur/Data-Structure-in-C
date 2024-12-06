#include <stdio.h>
int main()
{
  int arr[100], size, i, j, swap;

  printf("Enter Array size: ");
  scanf("%d", &size);

  printf("Enter %d integers: ", size);

  for (i=0; i<size; i++){
    scanf("%d", &arr[i]);
  }
      for (i=0 ; i<size-1; i++)
      {
        for (j=0; j<size-i-1; j++)
        {
          if (arr[j] > arr[j+1])
          {
            swap = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = swap;
          }
        }
      }
  printf("\nSorted list in ascending order: \n");
  for (i=0; i<size; i++)
     printf("%d ", arr[i]);

  return 0;
}
