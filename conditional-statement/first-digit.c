#include <stdio.h>

int main()
{
  int X;
  scanf("%d", &X);
  int firstDigit = X / 1000;
  if (firstDigit % 2 == 0)
  {
    printf("EVEN\n", firstDigit);
  }
  else
  {
    printf("ODD\n", firstDigit);
  }

  return 0;
}