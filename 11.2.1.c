#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int len)
{
  int i, j, min, temp;

  for (i = 0; i < len - 1; i++) {
    min = i;
    for (j = i+1; j < len; j++)
      if (arr[min] > arr[j])
        min = j;
    temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int arr[5] = {3, 5, 4, 5, 6};

  selection_sort(arr, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d, ", arr[i]);
  }

  return 0;
}
