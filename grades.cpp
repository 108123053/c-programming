 #include<stdio.h>
 int main()
 {
 	int p,c,b,m,cs,t;
 	scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
 	t=(p+c+b+m+cs)/6;
 	/* t is the percentage */
 	if(t>=90)
 	printf("grade a");
 	if(t>=80&&t<90)
 	printf("grade b");
 	if(t>=70&&t<80)
 	printf("grade c");
 	if(t>=60&&t<70)
 	printf("grade d");
 	if(t>=40&&t<60)
 	printf("grade e");
 	else
 	printf("grade f");
 }
