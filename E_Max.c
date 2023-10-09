#include <stdio.h>

int main()
{

  int n, a;
  scanf("%d", &n);
  int max = 0;
  while (scanf("%d", &a) != EOF)
  {
    if (a > max)
    {
      max = a;
    }
  }
  printf("%d\n", max);

  return 0;
}