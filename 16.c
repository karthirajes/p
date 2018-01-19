#include<stdio.h>
int main()
{
int n1,n2,rem,rev=0;
printf("enter the num");
scanf("%d",&n2);
n1=n2;
while(n2>0)
{
rem=n%10;
rev=rev*10+rem;
n2=n2/10;
}
if(n1==rev)
printf("the number is palindrome");
else
printf("the number is not a palindrome");
}
