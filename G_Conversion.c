#include <stdio.h>
#include <string.h>
int main()
{

  char A[100000];
  scanf("%s", &A);
  int ln = strlen(A);
  for (int i = 0; i < ln; i++)
  {
    if (A[i] == ',')
    {
      A[i] = ' ';
    }
    if (A[i] >= 97 && A[i] <= 122)
    {
      A[i] = A[i] - 32;
    }
    else if (A[i] >= 65 && A[i] <= 90)
    {
      A[i] = A[i] + 32;
    }
  }
  printf("%s", A);
  return 0;
}