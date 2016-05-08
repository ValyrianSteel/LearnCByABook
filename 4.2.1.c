#include <stdio.h>

int main()
{
  int x = 456;
  printf("x: %d\n", x);
  printf("个位:%d\n", x%10);
  printf("十位:%d\n", x/10%10);
}
