#include<stdio.h>
int power(int a,int b)
{
	int p=1;
	for(int i=0;i<=b;i++)
	p=p*a;
	return p;
}
int main()
{
	int a,b;
	scanf("%d",&a,&b);
	printf("%d",power(a,b));
	printf("%d",power(2,4));
	return 0;
}
