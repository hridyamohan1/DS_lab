#include<stdio.h>
#define n 5
int q[n];
int front=-1;
int rear=-1;
void enqueue()
{
	int item;
	printf("Enter item to insert:");
	scanf("%d",&item);
	if(rear==n-1)
		printf("Queue full\n");
	else
	{
		if(front==-1)
			front=0;
			rear=rear+1;
			q[rear]=item;
			printf("\nItem inserted successfully\n");
	}
}
void dequeue()
{
	if(rear==-1)
		printf("Queue empty\n");
	else
	{
		printf("%d is deleted\n",q[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		front=front+1;
	}
}
void display()
{
	if(rear==-1)
		printf("Queue empty\n");
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("queue[%d]:%d\n",i+1,q[i]);
		}
	}
}
int main()
{
	int ch;
	do
	{
		printf("\n\n...MENU...\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
			       break;
			case 4:break;
		}
	}while(ch!=4);
}

