#include <stdio.h>
int main()
{
 int a=5,i;
 char s[100];
 gets(s);
 
 for(i=0;i<=a;i++)
 {
     printf("%c",s[i]);
 }
 return 0;
}
