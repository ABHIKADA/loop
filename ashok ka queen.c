#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf ("enter n value");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		if (n%i==0)
		{
		    sum +=i;
		}
	}
	if (sum == n )
	{
		printf("perfect");
	 } 
	 else 
	 {
	 	printf("not perfect");
	 }
}
