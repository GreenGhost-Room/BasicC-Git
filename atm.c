#include <stdio.h>
int main()
{
    int x;
    float y;
    printf("x:\n");
    scanf("%d",&x);
    printf("y:\n");
    scanf("%f",&y);
    if((x%5==0)&&(x+0.50<=y))
    {
        printf("transaction sucessfull");
        y=y-(x+0.50);
        printf("y:%.2f",y);
    }
    else
    {
        printf("unsufficient fund");
    }
    return 0;
}