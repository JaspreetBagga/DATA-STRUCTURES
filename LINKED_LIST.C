
#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();

int count=0;

int main()
{
	int i,data;
	clrscr();

	do
	{
		printf("\n\t1. Insert an element at the beginning of LINKED LIST");
		printf("\n\t2. Insert an element at the end of LINKED LIST");
		printf("\n\t3. Traverse LINKED LIST");
		printf("\n\t4. Delete an element from beginning of LINKED LIST");
		printf("\n\t5. Delete an element from the end of LINKED LIST");
		printf("\n\t6.EXIT FROM LINKED LIST\n");

			scanf("%d",&i);

			switch(i)
			{
				case 1:
				{
					printf("\n\t\tEnter value to insert : ");
					scanf("%d",&data);
					insert_at_begin(data);
					break;
				}
				case 2:
				{
					printf("\n\t\tEnter value to insert : ");
					scanf("%d",&data);
					insert_at_begin(data);
					break;
				}
				case 3:
				{
					printf("\n\t\tDISPLAY\n");
					traverse();
					break;
				}
				case 4:
				{
					delete_from_begin();
					break;
				}
				case 5:
				{
					delete_from_end();
					break;
				}
				case 6:
				{
					printf("\n\n\t\tEXIT \n");
					break;
				}
				default :
				{
					printf("\n\t\tEnter a valid input \n");
				}
			}
	}while(i!=6);
	getch();
	return 0;
}

	void insert_at_begin(int x)
	{
		struct node*t;
		t=(struct node*)malloc(sizeof(struct node));
		t->data=x;
		count++;

		if(start==NULL)
		{
			start=t;
			start->next=NULL;
			return;
		}

		t->next=start;
		start=t;
	}

	void insert_at_end(int x)
	{
		struct node*t,*temp;
		t=(struct node*)malloc(sizeof(struct node));

		t->data=x;
		count++;

		if(start==NULL)
		{
			start=t;
			start->next=NULL;
			return;
		}

		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=t;
		t->next=NULL;
	}

	void traverse()
	{
		struct node *t;
		t=start;
		if(t==NULL)
		{
			printf("\n\t\tLINKED LIST is empty\n");
			return;
		}
		printf("\n\t\tThere are %d elements in LINKED LIST\n",count);
		while(t->next!=NULL)
		{
			printf("\n\t\t%d\n",t->data);
			t=t->next;
		}
		printf("\n\t\t%d\n",t->data);
	}

	void delete_from_begin()
	{
		struct node *t;
		int n;
		if(start==NULL)
		{
			printf("\n\t\tLINKED LIST is empty.\n");
			return;
		}

		n=start->data;
		t=start->next;
		free(start);
		start=t;
		count--;
		printf("\n\t\t%d deleted from beginning of LINKED LIST\n",n);

	}

	void delete_from_end()
	{
		struct node *t,*u;
		int n;
		if(start==NULL)
		{
			printf("\n\t\tLINKED LIST is empty\n");
			return;
		}

		count--;
		if(start->next==NULL)
		{
			n=start->data;
			free(start);
			start=NULL;
			printf("\n\t\t%d deleted from end successfully\n",n);
			return;
		}
		t=start;
		while(t->next!=NULL)
		{
			u=t;
			t=t->next;
		}
		n=t->data;
		u->next=NULL;
		free(t);
		printf("\n\t\t%d deleted from end successfully\n",n);
	}


