#include<stdio.h>
int main()
{
	int a,b,t;
    printf("Enter the values");
	scanf("%d %d" ,&a,&b);
	t=a;
	a=b;
	b=t;
	printf("The numbers after swapping will be %d %d",a,b);
	return 0;
}
