#include<stdio.h>
int main()
{
	int N,M,i,j,rowsum=0;
	scanf("%d%d",&N,&M);
	int a[N][M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		rowsum=0;
		for(j=0;j<M;j++)
		{
			rowsum=rowsum+a[i][j];
		}
		printf("%d ",rowsum);
	}
}