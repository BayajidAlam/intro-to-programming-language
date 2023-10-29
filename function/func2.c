#include <stdio.h>

int sum(){
  int a,b;
  scanf("%d %d",&a,&b);
  int sum = a + b;
  return sum;
}
int main() {

    int su = sum();
    printf("sum = %d\n",su);
    return 0;
}