#include<stdio.h>
main()
{
	 int n[5];
	 int i,sum=0;
	 for(i=0;i<5;i++)
	 {
	 	printf("Enter the elements %d",i+1);
	 	scanf("%d",&n[i]);
	 	
	 }
	 for(i=0;i<5;i++)
	 {
	 	printf("\n%d",n[i]);
	 	
	 	sum=sum+n[i];
	 	
	 }
	 printf("\nsum=%d",sum);
	 
}
