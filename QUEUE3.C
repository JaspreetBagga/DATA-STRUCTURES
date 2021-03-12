#include<stdio.h>
#include<conio.h>
#define MAX 100
int queue[MAX],front=-1,rear=-1,item,size,i,choice;

void queue_insert();
void queue_delete();
void queue_display();

void main()
{
 clrscr();
 printf("\nEnter the size of QUEUE[MAX]: ");
 scanf("%d",&size);
 printf("\n\tCIRCULAR QUEUE OPERATIONS");
 printf("\n\t-------------------------");
 printf("\n\t1. INSERT\n\t2. DELETE\n\t3. DISPLAY\n\t4. EXIT");
 do{
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	 switch(choice)
	 {
		case 1:
		{
		 queue_insert();
		 break;
		}
		case 2:
		{
		 queue_delete();
		 break;
		}
		case 3:
		{
		 queue_display();
		 break;
		}
		case 4:
		{
		 printf("\n\tEXIT POINT");
		 break;
		}
		default :
		{
		 printf("\n\tENTER a VALID CHOICE(1\2\3\4)");
		}

	 }
 }while(choice!=4);

getch();

}

void queue_insert()
{
	if((front==0 && rear==size-1)||front==rear+1)
	{
		printf("\n\tQUEUE is OVERFLOW");
	}

	else if(front==-1)
	{
		front=0;
		rear=0;
		printf("\n\tENTER VALUE to INSERT: ");
		scanf("%d",&item);
		queue[rear]=item;
	}
	else if(rear==rear-1)
	{
		rear=0;
		printf("\n\tENTER VALUE to INSERT: ");
		scanf("%d",&item);
		queue[rear]=item;
	}
	else
	{
		rear=rear+1;
		printf("\n\tENTER VALUE to INSERT: ");
		scanf("%d",&item);
		queue[rear]=item;
	}

}

void queue_delete()
{
	if(front==-1)
	{
		printf("\n\tQUEUE is UNDERFLOW");
	}
	else if(front==rear)
	{
		item=queue[front];
		printf("\n\tVALUE DELETED from QUEUE: %d",item);
		front=-1;
		rear=-1;
	}
	else if(front==size-1)
	{
		item=queue[front];
		printf("\n\tVALUE DELETED from QUEUE: %d",item);
		front=0;
	}
	else
	{
		item=queue[front];
		printf("\n\tVALUE DELETED from QUEUE: %d",item);
		front=front+1;
	}
}

void queue_display()
{
	if(front==-1)
	{
		printf("\n\tQUEUE is EMPTY");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
		printf("\n\t%d",queue[i]);
		}
	}
}