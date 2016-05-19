#include <stdio.h>

#define LEN 8
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };

void swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}

int partition(int start, int end)
{
  int pivot = start;
  int pivotValue = a[pivot];
  swap(&a[pivot], &a[end]);
  int mid = start;
  for (int i = start; i < end; i++)
  {
    if (a[i] <= pivotValue) {
      swap(&a[mid], &a[i]);
      mid++;
    }
  }
  swap(&a[end], &a[mid]);

  return mid;
}

void quicksort(int start, int end)
{
  int mid;
  if (start < end) {
    mid = partition(start, end);
    quicksort(start, mid-1);
    quicksort(mid+1, end);
  }
}

int main(void)
{
  quicksort(0, LEN-1);
  for (int i = 0; i < LEN; i++)
  {
    printf("%d,", a[i]);
  }
}
