#include<stdio.h>
void main()
{
	int a,b,sum;
	char ch;
	do
	{
		printf("Enter two numbers");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("%d",sum);
		printf("DO YOU WANT TO CONTINUE");
		scanf("%c",&ch);
	} while(ch=='YES');
}