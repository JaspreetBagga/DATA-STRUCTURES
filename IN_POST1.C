#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[100];
int top=-1;
void push(char x)
{
	stack[++top]=x;
}
char pop()
{
	if(top==-1)
		return -1;
	else
		return stack[top--];
}
int priority(char x)
{
	if(x=='(')
		return 0;
	if(x=='+' || x=='-')
		return 1;
	if(x=='*' || x=='/')
		return 2;
	if(x=='^')
		return 3;
	return 0;
}
void main()
{

	char exp[100];
	char copy[100],x;
	int i=0;

	clrscr();
	printf("Enter expressions : ");
	scanf("%s",exp);
	printf("\n");
       strcpy(copy,exp);
	while(copy[i]!='\0')
	{
		if((copy[i]>=65 && copy[i]<=90)||(copy[i]>=97 && copy[i]<=122)||(copy[i]>=48 && copy[i]<=57))
		{
		       printf("%c",copy[i]);
		}
		else if(copy[i] =='(')
			push(copy[i]);
		else if(copy[i]==')')
		{
			while((x=pop()) != '(')
				printf("%c",x);
		}
		else
		{
			while(priority(stack[top]) >= priority(copy[i]))
				printf("%c",pop());
			push(copy[i]);
		}
		i++;
	}
	while(top!=-1)
	{
		printf("%c",pop());

	}
	getch();
}
