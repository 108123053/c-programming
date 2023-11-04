#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the no.of rows and columns");
	scanf("%d %d",&n,&k);
	int a[n][k];
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("enter a");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
}
