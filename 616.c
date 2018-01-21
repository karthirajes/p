#include <stdio.h>

int main(void) {
	int n,k,m,l,a;
	scanf("%d",&n);
	k=n%10;
	m=n/10;
	l=m%10;
	a=m/10;
	printf("the individual digits are %d\t%d\t%d\t",a,l,k);
	return 0;
}
