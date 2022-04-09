#include <stdio.h>

#include <stdlib.h>
int main(){
    int *ptr;
    int i;
    int n=10;
    ptr=(int*)malloc(sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        
    }
    for(i=0;i<n;i++){
        printf("your value is:");
        printf("%d\n",(*(ptr+i)));
    }
    free(ptr);
    return 0;
}