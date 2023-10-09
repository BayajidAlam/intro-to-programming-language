#include <stdio.h>

int main()
{

  int n;
  // EOF-End of file 
  // take multiple input at a time 
  while (scanf("%d", &n) != EOF)
  {
    if (n != 1999)
    {
      printf("Wrong\n");
    }
    else
    {
      printf("Correct\n");
      break;
    }
  }

  return 0;
}