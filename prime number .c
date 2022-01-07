#include<stdio.h>
main()
{
	int a,i,b=0;
	printf("enter a value ");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if (a%i==0)
	  {
		b+=1;
	  }
	}
	if (b==1)
	{
		printf ("its a prime number");
	}
	else 
	{
		printf ("its not a prime number");
	}
}
