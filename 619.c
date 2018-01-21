#include <stdio.h>

void main() {
	int n,t,m,l,a;
	scanf("%d",&n);
	t=n%10;
	m=n/10;
	l=m%10;
	a=m/10;
	printf("the individual digits are %d\t%d\t%d\t",a,l,t);

}
