#include <stdio.h>
#include <string.h>

struct StructFunction
{
    int empid;
    char name[120];
    int sallary;
};
void Input(struct StructFunction a[]);
void Output(struct StructFunction a[]);

int main(){
    struct StructFunction f[10];
    Input(f);
    Output(f);
    
    return 0;
}
void Input(struct StructFunction a[]){
    a[0].empid=12;
    strcpy(a[0].name,"ram");
    a[0].sallary=12000;
   
    a[1].empid=13;
    strcpy(a[1].name,"raat");
    a[1].sallary=12345;
    
    

}
void Output(struct StructFunction a[]){
    printf("1 %d\n",a[0].empid);
    printf("1 %s\n",a[0].name);
    printf("1 %d\n",a[0].sallary);
    printf("1 %d\n",a[1].empid);
    printf("1 %s\n",a[1].name);
    printf("1 %d\n",a[1].sallary);

}
