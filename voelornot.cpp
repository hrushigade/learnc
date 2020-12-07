#include<stdio.h>
main()
{
	char c;
	printf("enter a character to know it is vowel or not");
	scanf("%c",&c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("the character %c is vowel\n",c);
	else
	printf("the character %c is not vowel",c);
}
