#include<stdio.h>
int main()
{
	int n,j,i;
	printf("enter the order of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
		for(j=0;j<n/2;j++)
		{
			a[j]=a[j]+a[n-j-1];
			a[n-j-1]=a[j]-a[n-j-1];
			a[j]=a[j]-a[n-j-1];
		}
	
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
}
