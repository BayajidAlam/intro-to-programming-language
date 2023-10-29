#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{

    printf("%d", sum(1, 5));
    return 0;
}