#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,item,i;
void print(void);
void push(void);
void pop(void);
void display(void);
void main()
{
clrscr();
print();
//top=-1;
printf("Function You Can Perform\n");
printf("\n\t1. Push");
printf("\n\t2. Pop");
printf("\n\t3.Display");
printf("\n\t4.Exit");
do
{
printf("\nFunction to be performed : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\nExit");
break;
}
default:
{
printf("Entered Value is out of Function Menu");
break;
}
}
}
while(choice!=4);
getch();
}

void print()
{
printf("Enter element to be present in stack: ");
scanf("%d",&n);
top=n-1;
for(i=0;i<=top;i++)
{
scanf("%d",&stack[i]);
}
}
void push()
{

printf("Enter element to be pushed in stack:");
scanf("%d",&item);
top++;
stack[top]=item;
}
void pop()
{
//top=n-1;
item=stack[top];
printf("%d is poped out\n",item);
top--;
}

void display()
{
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
