#include<stdio.h>
#define mod 4294967296
int main()
{
    unsigned long int fact(unsigned long int n);
    int test;
    unsigned long int n;
    scanf("%d",&test);
    if(test<=10000)
    {
        int i=0;
        while(i<test)
        {
            scanf("%u",&n);
            printf("Case %d: %u\n",++i,fact(n));
        }
    }
    return 0;
}
unsigned long int fact(unsigned long int n)
{
    unsigned long int sum=1,i;
    for(i=1;i<=n;i++)
    {
        sum=(sum%mod*i%mod)%mod;
    }
    return sum;
}
//the code was wrong

