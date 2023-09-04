#include<stdio.h>
int main()
{
	int a,b;
    printf("Enter the two integers to be swapped");
	scanf("%d %d" ,&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
    printf("The result after swapping will be %d %d",a,b);
	return 0;
}
