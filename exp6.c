#include<stdio.h>
#include<stdlib.h>
int array[100],i,n;
void create()
{
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Array created succesfully\n");
	printf("Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
void insert()
{
	int pos,value;
	printf("Enter the position do you want to insert:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		array[i+1]=array[i];
	}
	printf("Enter the value to be insert:");
	scanf("%d",&value);
	array[pos]=value;
	printf("Value inserted successfully\n");
	printf("New array is:");
	n=n+1;
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
void delete()
{
	int del_pos;
        printf("Enter the position do you want to delete:");
        scanf("%d",&del_pos);
        for(i=del_pos;i<=n-1;i++)
        {
                array[i]=array[i+1];
        }
        printf("Deleted successfully\n");
        printf("New array is:");
        n=n-1;
        for(i=0;i<n;i++)
        {
                printf("%d\t",array[i]);
        }
}
void store()
{
	int pos,ele;
        printf("Enter the position do you want to insert:");
        scanf("%d",&pos);
        for(i=n-1;i>=pos-1;i--)
        {       
                array[i+1]=array[i];
        }       
        printf("Enter the value to be insert:");
        scanf("%d",&ele);
        array[pos]=ele;
        printf("Value inserted successfully\n");
        printf("New array is:");
        n=n+1;
        for(i=0;i<n;i++)
        {       
                printf("%d\t",array[i]);
        }       
}       
void sort()
{
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("Sorted successfully\n");
	printf("Sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
void display()
{
	printf("Elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
}
int main()
{
	int ch;
	do
	{
		printf("\n\n...MAIN...\n1.CREATE\n2.INSERT\n3.DELETE\n4.STORE\n5.SORT\n6.DISPLAY\n7.EXIT\n\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			       break;
			case 2:insert();
			       break;
			case 3:delete();
			       break;
			case 4:store();
			       break;
			case 5:sort();
			       break;
			case 6:display();
			       break;
			case 7:break;
		}
	}while(ch!=7);
}



