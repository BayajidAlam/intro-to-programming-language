#include <stdio.h>
#include <string.h>
int main()
{

  char a[100], b[100];
  scanf("%s%s", a, b);
  // copy a array to another one 
  // for (int i = 0; i <= strlen(a); i++)
  // {
  //   a[i] = b[i];
  // }

  // copy using builtin function
  strcpy(a, b);
  printf("%s", a);
  return 0;
}