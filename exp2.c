#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("Sum of odd numbers:%d",sum);
}
