#include <stdio.h>

int main()
{

  int len;
  scanf("%d", &len);
  int A[len];
  int min = 999999999, max = -999999999;
  int minI = 0, maxI = 0;
  for (int i = 0; i < len; i++)
  {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < len; i++)
  {
    if (A[i] < min)
    {
      min = A[i];
      minI = i;
    }
     if (A[i] > max)
    {
      max = A[i];
      maxI = i;
    }
  }
  
  A[minI] = max;
  A[maxI] = min;

  for (int i = 0; i < len; i++)
  {
    printf("%d ", A[i]);
  }
  return 0;
}