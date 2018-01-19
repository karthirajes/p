#include<stdio.h>
int main()
{
int a,b=0,c=0,d=0,x;
printf("enter the num");
scanf("%d",&num);
x=a;
while(a!=0)
{
c=a%10;
d=pow(c,3);
b=b+d;
a=a/10;
}
if(b==x)
printf("the given num is armstrong");
else
printf("the given no is not armstrong");
}
