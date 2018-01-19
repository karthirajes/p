#include<stdio.h>
void main()
{
int a,b=0,c=0,d=0,s;
printf("enter the num");
scanf("%d",&num);
s=a;
while(a!=0)
{
c=a%10;
d=pow(c,3);
b=b+d;
a=a/10;
}
if(b==s)
printf("the given num is armstrong");
else
printf("the given no is not armstrong");
}
