#include<stdio.h>
main()
{
	int year;
	printf("enter the year you want to check");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("%d is leap year",year);
	}
	else if(year%100==0)
	{
		printf("%d is not a leap year",year);
	}
	else if(year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else
		printf("%d is not a leap year",year);
}
