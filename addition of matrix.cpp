#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the no.of rows and no.of coluns respectively");
	scanf("%d %d",&n,&k);
	int a[n][k],b[n][k],c[n][k];
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("Enter a");
			scanf("%d",&a[i][j]);
			printf("Enter b");
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for ( i = 0; i<n; i++ )
	{
		for ( j = 0; j < k; j++ )
		{
			printf("%d \t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
