#include<stdio.h>
int prime(int a)
{
	int c=0,n;
	for(int i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			c++;
		}
		if (c==2)
		printf ("\n%d is prime no",n);
		else
		printf("\n %d is not a prime no",n);
	}
}
