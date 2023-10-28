#include <stdio.h>
#include<string.h>
int main() {
    char A[1001],T[1001];
    scanf("%s %s",&A,&T);
    int stA= strlen(A);
    int stT= strlen(T);
    
    printf("%d %d\n", stA, stT);
    printf("%s %s\n",A,T);
    return 0;
}