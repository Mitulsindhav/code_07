#include<stdio.h>
main()
{
	 int year;
	 printf("Enter a year:");
	 scanf("%d",&year);
	 
	 if(year%400==0)
	 {
	 	printf("It is an Leap year");
	 	
	 }
	 else if(year%100==0)
	 {
	 	 printf("it is not an Leap year");
	 	 
	 }
	 else if(year%4==0)
	 {
	 	 printf("It is an Leap year");
	 	 
	 }
	 else 
	 {
	 	printf("It is not an Leap year");
	 }
	 
}
