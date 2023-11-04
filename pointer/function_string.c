#include <stdio.h>
#include <string.h>
void fun(int ar[])
{
  printf("%d", strlen(ar));
}
int main()
{
  char arr[6] = "Hello";
  fun(arr);
  return 0;
}