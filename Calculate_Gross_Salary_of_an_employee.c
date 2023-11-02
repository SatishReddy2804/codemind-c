#include<stdio.h>
int main()
{
    float pf,salary,hra,da,gs;
    scanf("%f%f%f",&salary,&hra,&da);
    pf=salary*12/100;
    gs=salary+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}