#include<stdio.h>
int main()
{
	int n,k,i,j,min,max;
	printf("enter the order of array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array");
		scanf("%d",&a[i]);
	}
	min = a[0];
	for(i=0;i<n;i++)
	{
		if(a[0]>a[i])
		min = a[i];
	}
	printf("the min of this array of elements is %d\n",min);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		max=a[i];
	}
	printf("the max of this array of elements is %d",max);
	for(i=0;i<n;i++)
	{
		k=k+a[i];
	}
	float l=k/n;
	printf("the avg of this array of elements is %f ",l);
	}
	
