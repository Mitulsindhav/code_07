#include<stdio.h>
main ()
{
	int a=10,b=20;
	
	printf("Swaping a=%d b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Swap a=%d b=%d",a,b);
	
}
