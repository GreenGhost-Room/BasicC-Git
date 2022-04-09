#include <stdio.h>
int main()
{
    int t, n, x, s, r, max = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &x);
        for (int j = 1; j <= n; j++)
        {
            scanf("%d %d", &s, &r);
            if (x >= s && r > max)
            {
                max = r;
            }
        }

        printf("%d\n", max);
        max = 0;
    }
    return 0;
}