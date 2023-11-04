#include <stdio.h>
#include <string.h>
int main()
{

  int n;
  char A[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%s", &A);
    int ln = strlen(A);
    if (ln <= 10)
    {
      printf("%s", A);
    }
    else
    {
      printf("%c%d%c", A[0], ln - 2, A[ln - 1]);
    }
  }
  return 0;
}