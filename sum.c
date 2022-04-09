#include <stdio.h>
int main(){
    int n,count;
    int sum=0;
    printf("n:");
    scanf("%d",&n);
    for(count=1; count<=n; count++){
        sum+=count;
    }
    
    printf("sum:%d",sum);
    return 0;
}