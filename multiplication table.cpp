#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		k=n*i;
		printf("%d*%d==%d",n,i,k);
		printf("\n");
	}
}
