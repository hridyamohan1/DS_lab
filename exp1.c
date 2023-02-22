#include<stdio.h>
int main()
{
	int a;
	float b,c;
	printf("Enter an integer:");
	scanf("%d",&a);
	printf("Enter a floating point number:");
	scanf("%f",&b);
	c=a+b;
	printf("\n\nResult is:%.2f\n",c);
}
