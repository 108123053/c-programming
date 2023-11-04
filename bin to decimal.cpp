#include<stdio.h>
#include<math.h>
int main()
{
	int bin,remainder,i=0,dec=0;
	printf("enter the binary number");
	scanf("%d",&bin);
	for(;bin!=0;bin/=10,i++)
	{
		remainder=bin%10;
		dec+=remainder * pow(2,i);
	}
	printf("the decimal equivalent of given binary is %d",dec);
	}
