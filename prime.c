#include <stdio.h>
int main(){
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    for(int i=2;i<x;i++){
        if(x%i==0){
            printf("not prime");
            break;
        }
        else{
            printf("prime");
        }
        
        
    }
    
    
    return 0;
}