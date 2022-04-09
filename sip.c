#include <stdio.h>
int main()
{
    float amount;
    int month;
    float intrest;
    float rate;
    float compound;
    printf("amount=");
    scanf("%f", &amount);
    printf("month=");
    scanf("%d", &month);
    printf("intrest=");
    scanf("%f", &intrest);
    rate = intrest / 100;
    for (int i = 1; i<month+1; i++)
    {
        compound = amount * rate;
        amount = amount + compound;
    }

    printf("amount=%f", amount);
    return 0;
}