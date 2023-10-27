#include <stdio.h>

int main()
{

  // char a[5] = {10, 20, 30, 40, 50};
  // char a[5] = {'10', '20', '30', '40', '50'};
  char a[6] = "Joyel\0";
  // int siz = sizeof(a) / sizeof(char);
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%c\n", a[i]);
  // }
  // print without loop
  printf("%s", a);
  return 0;
}