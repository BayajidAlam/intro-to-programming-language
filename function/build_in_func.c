#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

  double c;
  // scanf("%lf", &c);
  int cel = ceil(c);
  // printf("%d\n", cel);

  // floor
  int floorC = floor(c);
  // printf("%d\n", floorC);

  // round
  int roundC = round(c);
  // printf("%d\n", roundC);

  // root
  int x;
  // scanf("%d", &x);
  int rootX = sqrt(x);
  // printf("%d\n", rootX);

  // power
  int a, b;
  // scanf("%d %d", &a, &b);

  int power = pow(a, b);
  // printf("%d\n", power);

  // absolute 
  int y;
  scanf("%d", &y);
  int ans = abs(y);
  printf("%d\n", ans);

  return 0;
}