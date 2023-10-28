#include <stdio.h>
#include <string.h>
int main()
{

  char a[100], b[100];
  scanf("%s %s", a, b);

  const value = strcmp(a, b);
  if (value < 0)
  {
    printf("A choto\n");
  }
  else if (value > 0)
  {
    printf("B choto\n");
  }
  else
  {
    printf("Same");
  }
  return 0;
}