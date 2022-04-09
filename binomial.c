#include <stdio.h>
#define max 10
int main()
{
    int m, x;
    int binom = 1;
    printf("mx");
    m = 0;
    while (m <= max)
    {
        printf("%d", m);
        m++;
    }
    printf("\n--------------------------------\n");
    m = 0;
    do
    {
        printf("%d", m);
        x = 0;
        while (x <= m)
        {
            if (m == 0 || x == 0)
                printf("%d", binom);

            else
            {
                binom = binom * (m - x + 1) / x;
                printf("%d", binom);
            }
            x = x + 1;
        }
        printf("\n");
        m = m + 1;
    } while (m <= max);
    return 0;
}