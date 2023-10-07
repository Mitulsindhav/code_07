#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the values of a:");
	scanf("%d",&a);
	printf("Enter the values of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swaping the values of a=%d and b=%d",a,b);
	
}
