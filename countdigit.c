#include <stdio.h>
int count(int x);
int main(){
    int a;
    printf("Enter the digit: ");
    scanf("%d",&a);
    printf("number of digits: %d",count(a));
    return 0;
}
int count (int x){
    static int counter=0;
    if(x!=0){
        counter++;
        count(x/10);
    }
    return counter;
     
}