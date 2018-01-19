#include<stdio.h>
void main()
{
int n,b,i,pow,temp=1;
scanf("%d%d",&n,&b);
for(i=0;i<b;i++)
{
pow=n*temp;
temp=pow;
}
printf("%d",pow);
}
