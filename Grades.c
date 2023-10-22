#include<stdio.h>
int main()
{
    int p,c,b,m,cs,total;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    total=p+c+b+m+cs;
    float per=(total*100)/500.0;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
}