#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push()
{
	int item;
	printf("Enter item to push:");
	scanf("%d",&item);
	if(top==n-1)
		printf("stack full\n");
	else
	{
		top=top+1;
		stack[top]=item;
		printf("\n\n%d pushed to stack\n",stack[top]);
	}
}
void pop()
{
	if(top==-1)
		printf("stack empty\n");
	else
	{
		printf("%d is popped\n",stack[top]);
		top--;
	}
}
void peek()
{
	if(top>=0)
		printf("top element is:%d",stack[top]);
	else
	{
		printf("stack empty\n");
	}
}
void disp()
{
        if(top>=0)
        {
		for(int i=top;i>=0;i--)
		{
                	printf("stack[%d]:%d\n",i+1,stack[i]);
		}
        }
        else
        {
                printf("stack empty\n");
        }
}
int main()
{
        int ch;
        do
        {
                printf("\n...MENU...\n1.push\n2.pop\n3.peek\n4.dislay\n5.exit\n");
                printf("Enter choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:push();
                               break;
                        case 2:pop();
                               break;
                        case 3:peek();
                               break;
                        case 4:disp();
                               break;
                         case 5:break;
                }
        }while(ch!=5);
}



