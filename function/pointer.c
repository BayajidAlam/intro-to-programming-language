#include <stdio.h>

int main()
{

    int x = 10;
    int *p = &x;
    x = 300;
    printf("%d\n", x);
    printf("%d\n", *p);
    return 0;
}