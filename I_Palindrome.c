#include <stdio.h>
#include <string.h>
int main()
{

  char A[1000];
  scanf("%s", &A);
  int ln = strlen(A);
  int start = 0, end = ln - 1;
  int isPalindrome = 1;
  for (int i = 0; i < ln; i++)
  {
    if (A[start] == A[end])
    {
      start++;
      end--;
    }
    else
    {
      isPalindrome = 0;
      break;
    }
  }
  if (isPalindrome == 1)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }

  return 0;
}