#include <stdio.h>

int main(void) {
	int n,k,m,l,b;
	scanf("%d",&n);
	k=n%10;
	m=n/10;
	l=m%10;
	b=m/10;
	printf("the individual digits are %d\t%d\t%d\t",b,l,k);
	return 0;
}
