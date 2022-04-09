#include <stdio.h>
int main()
{
    int marks;
    printf("marks:");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90:
        printf("grade:A");
        break;
        case 80:
        printf("grade:B");
        break;
        default:
        printf("Fail");
        break;

    }
    return 0;

}