#include<stdio.h>
main()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swappinfa %d and b%d",a,b);
}

