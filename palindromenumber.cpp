#include<stdio.h>
main()
{
	int dummy,n,rev=0,x;
	printf("enter a number");
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
		
	}
	if(dummy==rev)
	printf("the number is palindrome",rev);
	else
	printf("number is not palindrome",rev);
}
