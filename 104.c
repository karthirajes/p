#include <stdio.h>
void main() 
{
int a[100],n,i,j,min;
printf("\n enter the no. of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
	if(a[j]<a[i])
		min=a[j];
}
}
printf("\n the min value is %d ", min);
	return 0;
}
