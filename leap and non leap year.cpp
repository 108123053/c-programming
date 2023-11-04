#include<stdio.h>
int main()
{
	int yr,leapyear,nonleapyear;
	scanf("%d",&yr);
	{
	if(yr%100!=0)
	{
		if(yr%4==0)
	printf("it is leapyear");
	else
	printf("it is nonleapyear");
}
}
if(yr%100==0)
{
	if(yr%400==0)
	printf("it is leap year");
	else
	printf("it is non leap year");
}
}
