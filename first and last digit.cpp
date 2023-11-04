#include<stdio.h>
int main()
{
	int n,i,k;
	printf("enter the number");
	scanf("%d",&n);
	k=n%10;
		for(i=0;n>10;i++)
		{
			n=n/10;
		}
	printf("%d",k+n);
}
