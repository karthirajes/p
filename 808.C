#include <stdio.h>
int main()
{
 int a=7,i;
 char s[200];
 gets(s);
 
 for(i=0;i<=a;i++)
 {
     printf("%c",s[i]);
 }
 return 0;
}
