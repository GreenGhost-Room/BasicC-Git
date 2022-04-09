#include <stdio.h>
int main(){
    int BatteryPercentage,T;
    scanf("%d",&T);
    for(int i=0;i<=T;i++)
    {
        scanf("%d",&BatteryPercentage);
        if(BatteryPercentage<=15){
            printf("Yes");
            
        }
        else{
            printf("No\n");
        }
    }
    
    
    return 0;
}