#include <stdio.h>

int main() {

    int i = 10;
    // assign x value first and then occur increment(pre-increment)
    int x = i++;
    // x-11 i-10

    // assign and increment(post-increment)
    int x = ++i;
    // x-11 i-11
    printf("x-%d i-%d",i,x);

    return 0;
}