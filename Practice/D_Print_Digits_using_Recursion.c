#include <stdio.h>

void fun(int n)
{
  if (n == 0)
    return;
  int mod = n % 10;
  fun(n / 10);
  printf("%d ", mod);
}

int main()
{

  int n, m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &m);
    fun(m);
    if (m == 0)
    {
      printf("0");
    }
    printf("\n");
  }

  return 0;
}