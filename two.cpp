#include<stdio.h>
int main()
{
int i,k;
	int a[]={1,2,3,4,5,6};
	for(k=0;k<3;k++)
	{
		a[2*k]=a[2*k]+a[(2*k)+1];
		a[(2*k)+1]=a[2*k]-a[(2*k)+1];
		a[2*k]=a[2*k]-a[(2*k)+1];
		printf("%d %d",a[2*k],a[(2*k)+1]);
	}
}
