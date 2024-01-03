#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=x+1;i<y;i++)
    {
        int a=i*i;
        int b=i*i*i;
        printf("%d %d %d
",i,a,b);
    }
}