#include <stdio.h>
#include <math.h>
 int main()
{
  float x, y, z, p, s;
  scanf("%f%f%f", &x, &y, &z);
  p = 0.5 * (x + y + z);
  s = sqrt(p * (p-x) * (p-y) * (p-z));
  printf("arex = %f\n", s);
  return 0;
}