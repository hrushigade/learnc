#include<stdio.h>
main()
{
	int a=0,b=1,num,c,count;
	printf("enter no for fibonacci series");
	scanf("%d",&num);
	printf("the series is\n");
	printf("%d\n%d\n",a,b);
	count=2;
	while(count<num)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		count++;
	}
}
