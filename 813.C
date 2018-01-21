#include <stdio.h>
int main(void)
{
 int a=8,i;
 char s[20];
 gets(s);
 
 for(i=0;i<=a;i++)
 {
     printf("%c",s[i]);
 }
 return 0;
}
