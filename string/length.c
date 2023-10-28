#include <stdio.h>
#include <string.h>
int main()
{

  char a[100];
  scanf("%s", &a);
  int count = 0;
  // with while loop
  // int i = 0;
  // while (a[i] != '\0')
  // {
  //   count++;
  //   i++;
  // }


  // with for loop 
  // for (int i = 0; a[i] != '\0'; i++)
  // {
  //   count++;
  // }

  // with strlen 
  int st = strlen(a);
  printf("%d\n", st);
  return 0;
}