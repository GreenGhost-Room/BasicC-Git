#include <stdio.h>
#include <math.h>
int main()
{
    printf("..quadratic equation...\n");
    int a, b, c;
    float root1, root2;
    printf("a:\n");
    scanf("%d", &a);
    printf("b:\n");
    scanf("%d", &b);
    printf("c:\n");
    scanf("%d", &c);
    float D = sqrt(b * b - 4 * a * c);
    printf("D:%f",D);
    if (D >= 0)
    {
        printf("real\n");
        root1 = (-b + D) / (2 * a);
        root2 = (-b - D) / (2 * a);
        printf("root1:%f and root2:%f", root1, root2);
    }
    else
        printf("imaginary");

    return 0;
}