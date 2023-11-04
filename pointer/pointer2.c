#include <stdio.h>

int main() {

    double x = 5.26;
    double *p = &x;
    printf("%0.2lf\n", x);
    printf("%0.2lf\n", *p);
    printf("%d\n", sizeof(p));
    return 0;
}