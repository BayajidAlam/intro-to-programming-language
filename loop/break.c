#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for(int i=0; i<=n; i += 1){
    printf("%d\n", i);
    // immediately terminate the loop 
    if(i == 5 ) {
      break;
    }
  }
  return 0;
}