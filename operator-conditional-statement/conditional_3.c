#include <stdio.h>
int main()
{
  int tk;
  scanf("%d", &tk);
  if (tk >= 5000)
  {
    printf("Cox's Bazar Jabo\n");
    if (tk >= 10000)
    {
      printf("SaintMartin Jabo\n");
    }
    else
    {
      printf("Back Asbo");
    }
  }
  else
  {
    printf("Kothao Jabo Na");
  }

  return 0;
}