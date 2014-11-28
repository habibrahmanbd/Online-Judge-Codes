#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    long int test,m,n,rem;
    scanf("%ld",&test);
    while(test--)
    {
        scanf("%ld",&n);
        m=((315*n)+36962);
        m/=10;
        rem=m%10;
        if(rem<0) rem*=-1;
        printf("%ld\n",rem);

    }
    return 0;
}
