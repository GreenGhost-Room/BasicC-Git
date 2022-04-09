#include <stdio.h>
int sum(int x);
int main(){
    int a;
    printf("a:");
    scanf("%d",&a);
    printf("sum by recursion: %d",sum(a));
    return 0;
}
int sum(int x){
    if(x==1){
        return 1;
    }
    else{
        return (x+sum(x-1));
    }
}