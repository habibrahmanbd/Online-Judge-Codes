#include<stdio.h>
int main()
{
    long count,n,j,tcase;
    scanf("%ld",&tcase);
    while(tcase--)
    {
        scanf("%ld",&n);
        count=0;
        for(j=5; n/j>=1; j*=5)
            count+=n/j;
        printf("%ld\n",count);
    }
    return 0;
}
