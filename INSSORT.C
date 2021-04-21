#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100],size,i,j,temp;
	clrscr();
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	printf("\n Enter %d elements in array",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=1;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\n\tArray after sorting");
	for(i=0;i<size;i++)
	{
		printf("\n\t\t%d",arr[i]);
	}
	getch();
}