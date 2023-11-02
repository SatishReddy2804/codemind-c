#include<stdio.h>
int main()
{
    int i,N,sum;
    scanf("%d",&N);
    for(i=1;i<=N;i++);
    {
        sum=(N*(N+1))/2;
        printf("%d",sum);
    }
}