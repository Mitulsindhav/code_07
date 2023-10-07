#include<stdio.h>
main ()

{
	int arr[10];
	int n,i;
	
	printf("Enter the size of the Array:");
	scanf("%d",&n);
	
	printf("Enter An Array;");
		for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
}
       printf("Reversed array:");
       for(i=n-1;i<n;i++)
       {
	   
       printf("%d",arr[i]);
       
}
}

