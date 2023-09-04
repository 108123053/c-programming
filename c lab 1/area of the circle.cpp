#include<stdio.h>
int main()
{
	float a,b,c,d,e,p;
    printf("Enter the marks in five subjects");
	scanf("%f %f %f %f %f" ,&a,&b,&c,&d,&e);
	p = (a+b+c+d+e)/5;
	printf("The percentage of the student is %f %%",p);
	return 0;
}
