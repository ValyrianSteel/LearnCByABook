#include <stdio.h>

void print_fun(int x);

int main()
{
  int x = 456;
  print_fun(x);
}

void print_fun(int x)
{
  printf("x: %d\n", x);
  printf("个位:%d\n", x%10);
  printf("十位:%d\n", x/10%10);
}
