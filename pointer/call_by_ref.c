#include <stdio.h>

int fun(int *p)
{
  *p = 500;
}
int main()
{

  int x = 100;
  fun(&x);
  printf("%d\n", x);
  return 0;
}