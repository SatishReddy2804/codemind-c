#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    float average;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    average=float(sum)/n;
    printf("%.2f",average);
}