#include <stdio.h>

int main()
{

    long long int n;
    scanf("%lld", &n);

    char A[n];
    int sum = 0;
    scanf("%s", A);
    for (int i = 0; i < n; i++)
    {
        int new=0;
        new = A[i] - 48;
        sum = sum + new;;
    }
    printf("%d\n", sum);
    return 0;
}