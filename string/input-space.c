#include <stdio.h>
#include <string.h>
int main() {

    char a[180];
    // gets(a);
    fgets(a, 180, stdin);
    printf("%s\n", a);
    return 0;
}