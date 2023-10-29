#include <stdio.h>

int main()
{

    int x = 10;
    int *p = &x;
    printf("%p\n", p);
    // dereference to access p value
    printf("%d", *p);
    return 0;
}