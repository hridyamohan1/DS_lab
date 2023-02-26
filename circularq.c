#include<stdio.h>
#define n 5
int q[n];
int front=-1;
int rear=-1;
int flag=0;
void enqueue()
{
	int item;
	printf("Enter item to insert:");
	scanf("%d",&item);
	if((rear+1)%n==front)
	{
		printf("Queue full\n");
	}
	else
	{
		if(rear==-1)
			front=0;
			rear=(rear+1)%n;
			q[rear]=item;
			printf("Item inserted successfully\n");
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue empty\n");
	}
	else if(front==rear)
	{
		printf("%d is deleted\n",q[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("%d is deleted\n",q[front]);
		front=(front+1)%n;
	}

}
void search()
{
	int val;
                printf("Enter elements to be search:");
                scanf("%d",&val);
	if(front==-1)
	{
		printf("queue empty\n");
	}
	else
	{
		if(front>rear)
		{
			while(front>rear)
			{
				printf("%d",q[front]);
				front=(front+1)%n;
			}
		}

		if(front<=rear)
		{
			for(int i=front;i<=rear;i++)
			{
				if(q[i]==val)
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
		}
	}
	if(flag==1)
		printf("element found\n");
	else
		printf("element not found\n");
}
void disp()
{
        if(front==-1)
        {
                printf("queue empty\n");
        }
        else
        {
                if(front>rear)
                {
                        while(front>rear)
                        {
                                printf("%d",q[front]);
                                front=(front+1)%n;
                        }
                }
                if(front<=rear)
                {
                        for(int i=front;i<=rear;i++)
                        {
				printf("%d\t",q[i]);
			}
		}
	}

}
int main()
{
        int ch;
        do
        {
        printf("\n\n...MENU...\n1.insert\n2.delete\n3.search\n4.display\n5.exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
                case 1:enqueue();
                       break;
                case 2:dequeue();
                       break;
                case 3:search();
                       break;
                case 4:disp();
                       break;
                case 5:break;
        }
        }while(ch!=5);
}



