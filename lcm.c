#include <stdio.h>
int main()
{
    int i;
    int num1;
    int num2;
    int value;

    printf("num1=");
    scanf("%d", &num1);
    printf("num2=");
    scanf("%d", &num2);

    i = 2;
    value = 1;
    while (i < 100)
    {
        if (num1 % i == 0 || num2 % i == 0)
        {
            value *= i;
            num1 = num1 / i;
            num2 = num2 / i;
        }
        else
            i++;
    }
    printf("%d", value);

    return 0;
}