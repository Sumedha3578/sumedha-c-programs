#include <stdio.h>
int main()
{
int i;
int a[5] = {2,4,56,89,3};
scanf("%d",&a[i]);
for(int i=0;i<5;i++) // original order
{ 
printf("%d\t",a[i]);
}
printf("%d\n");
for(int i=4;i>=0;i--) // reverse order
{
printf("%d\t",a[i]);}	
return 0;
}
