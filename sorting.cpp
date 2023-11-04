#include<stdio.h>
int main()
{
 int n,i,j;
 printf("enter the order of array");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
 	printf("enter the elements of array");
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 	for(j=0;j<n;j++)
 	{
 		if(a[j]>a[j+1])
 		{
 			a[j]=a[j]+a[j+1];
 			a[j+1]=a[j]-a[j+1];
 			a[j]=a[j]-a[j+1];
		 }
	 }
 }
 for(i=0;i<n;i++)
 {
 	printf("%d",a[i]);
 }
}
