#include <stdio.h>
#include <math.h>

double myround(double x);

int main()
{
  double x;
  x = myround(-3.51);
  printf("%.4f\n", x);

  double y;
  y =  myround(4.49);
  printf("%.4f\n", y);
}

double myround(double x)
{
  if (abs(x)*10%10 >= 5)
    x = x/abs(x) * ceil(abs(x));
  else x = x/abs(x) * floor(abs(x));

  return x;
}
