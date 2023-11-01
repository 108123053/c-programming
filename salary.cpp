#include<stdio.h>
int main()
{
	float b,h,d,t,k;
    printf("enter the value of basic salary");
    scanf("%f",&b);
    h=0.16*b;
    d=0.44*b;
    t=0.08*b;
    k=b+h+d+t;
    /*here k is the gross salary*/
    printf("%f",k);
}
