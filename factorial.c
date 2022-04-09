#include <stdio.h>
int main()
{
    int i=0,n;
    int factorial=1;
    printf("n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("factorial:%d",factorial);
    return 0;
}