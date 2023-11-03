#include <stdio.h>

void fun(){
  printf("Fun start\n");
  printf("Fun end\n");
  fun();
}
int main() {

    
    printf("main start\n");
    fun();
    printf("main end\n");
    return 0;
}