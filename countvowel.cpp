#include<stdio.h>
main()
{
	char s[100];
	int i,count;
	printf("enter a character to know it is vowel or not");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	{
		count++;
	}
}
if{count==0)
{
	printf("no vowels here");
}
else
{
	printf("number of vowels %s in %d",s,count);
}
}
