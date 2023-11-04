#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	int a[]={5,7,1,3,8,2,5,9,1,7,1,3};
	printf("enter the element whose occurence to be found");
	scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		if(n==a[i])
		{
	    k=k+1;
	}
	}
	printf("%d",k);
}

