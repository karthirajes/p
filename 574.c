#include <stdio.h>
void main()
{
    int i = 65;
    int k = 120;
    printf("before swapping");
    printf(" value of i=%d k=%d", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("afterswapping");
    printf("value of i=%d k=%d ", i, k);

    return 0;
}
