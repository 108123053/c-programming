 #include<stdio.h>
 int main()
 {
  int y,m;
  scanf("%d %d",&y,&m);
  if(y%100==0)
  {
  	if(y%400==0)
  	{
  		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
  		printf("the no.of days in this month is 31");
  		else if(m==4||m==6||m==9||m==11)
  		printf("the no.of days in this month is 30");
  		else
  		printf("the no.of days in this month is 29");
	  }
	  }	
	  else if(y%4==0)
	  {
	  		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
  		printf("the no.of days in this month is 31");
  		else if(m==4||m==6||m==9||m==11)
  		printf("the no.of days in this month is 30");
  		else
  		printf("the no.of days in this month is 29");
	  }
	  else
	  {
	  	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
  		printf("the no.of days in this month is 31");
  		else if(m==4||m==6||m==9||m==11)
  		printf("the no.of days in this month is 30");
  		else
  		printf("the no.of days in this month is 28");
	  }
 }
