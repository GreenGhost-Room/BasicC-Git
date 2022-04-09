#include <stdio.h>
int main()
{
    int x = 90;
    int y = 30;
    int z = 60;
 
    if (x > y && x > z)
        printf("largest number:%d", x);
    else if (y > x && y > z)
        printf("largest number:%d", y);
        
    else
    printf("largest number:%d", z);
    
    return 0;
}