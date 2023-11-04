#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	printf("triangle is equilateral");
	if(a!=b&&b!=c)
	printf("triangle is scalene");
	else
	printf("triangle is isosceles");
}
