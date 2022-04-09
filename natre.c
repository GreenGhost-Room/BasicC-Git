#include <stdio.h>
//recursion number display

void num(int x);
/*int main(){
    int a=50;
    num(a);
    return 0;
}
void num(int x){
    if(x==1){
        printf("%d\t",1);
        }
        else{
            printf("%d\t",x);
            num(x-1);

        }

   
    }*/
    int main(){
        int a=1;
        num(a);
        return 0;
    }
    void num(int x){
        if(x<=50){
            printf("%d\t",x);
            num(x+1);
        }
    }
   

