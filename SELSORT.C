#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],size,i,j,min,temp;
	clrscr();
	printf("Enter the size of array ");
	scanf("%d",&size);
	printf("\nEnter the %d elements ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//applying selection sort
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	//printing
	printf("\n\tPrinting the array");
	for(i=0;i<size;i++)
		printf
		("\n\t%d",arr[i]);
	getch();
}