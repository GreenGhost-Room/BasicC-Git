#include <stdio.h>
int main()
{
    int n, sum;
    int i;
    sum = 0;
    int value;
    printf("n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        value = i % 2;
        printf("%d\n", i);
        if (value == 0)
        {
            sum += i;
        }
    }

    printf("sum of even:%d", sum);

    return 0;
}