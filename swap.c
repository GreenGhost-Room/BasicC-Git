#include <stdio.h>
int main(){
int temp;
int x=10;
int y=20;
temp=x;
x=y;
y=temp;
printf("after swap x:%d", x);
printf("after swap y:%d",y);

return 0;
}
    

