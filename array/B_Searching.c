#include <stdio.h>

int main()
{

  int n, found = -1;
  scanf("%d", &n);
  
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int target;
  scanf("%d", &target);
  for (int i = 0; i < n; i++)
  {
    if (target == arr[i])
    {
      found = i;
      break;
    }
  }

  if (found == -1)
  {
    printf("%d\n", found);
  }
  else
  {
    printf("%d\n", found);
  }
  return 0;
}
