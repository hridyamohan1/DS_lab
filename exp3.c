#include<stdio.h>
int main()
{
	int i,j,sum=0,n,m,a[100];
	printf("Enter how many numbers:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter an integer:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		j=i%m;
		sum+=j;
	}
	printf("sum of reminders:%d",sum);
}
