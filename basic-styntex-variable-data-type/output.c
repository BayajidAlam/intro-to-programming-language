#include <stdio.h>
int main ()
{
  int rahim;
  char c;
  float f;
  scanf("%d %c %f", &rahim,&c, &f);
  printf("%d %c %0.2f", rahim, c, f);

  // taking % as input 
  // fitst way 
  int a,b;
  char p;
  scanf("%d%c %d%c",&a,&p,&b,&p);
  printf("%d%% %d%%",a,b);

  // second way 
   int a,b;
  scanf("%d%% %d%%",&a,&b);
  printf("%d%% %d%%",a,b);
  return 0;
}