#include<stdio.h>
int main()
{
	int n,f;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
   scanf("%d",&a[i]);
	int s;
	scanf("%d",&s);
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("element found at %d\n",i);
			f=1;}
		}
		if (f==0)
		printf("not found");
	}
	
