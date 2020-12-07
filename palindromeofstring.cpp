#include<stdio.h>
#include<string.h>
main()
{
	int i,j=0;
	char str1[100],str2[100]={0};
	printf("enter a string to get reverse");
	gets(str1);
	for(i=strlen(str1)-1;i>=0;i--)
	{
	str2[j]=str1[i];
	j++;	
	}
	str2[j]='\0';
	printf("reversed string is %s\n",str2);
	if(strcmp(str1,str2)==0){
		printf("the given number is palindrome");
	}
	else
	{
		printf("given number is not palindrome");
	}
}
