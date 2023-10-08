#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for(int i=0; i<=n; i += 1){
    // skip the match condition 
    if(i == 5 ) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}