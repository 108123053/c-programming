#include<stdio.h>
int main()
{
 int i,j;
 int a[2][2]={4,3,2,1};
 int b[2][2]={1,2,3,4};
 int c[i][j];
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		scanf("%d %d",&a[i][j],&b[i][j]);
	}
  }
  c[i][j]=a[i][j]+b[i][j];
  printf("%d",c[i][j]);
}
