#include<stdio.h>
int main()
{
    long bigmod(long b,long p,unsigned int m);
    long b,p;
    unsigned int m,ans;
    while((scanf("%ld%ld%ul",&b,&p,&m))!=EOF)
    {
    ans=bigmod(b,p,m);
    printf("%d\n",ans);
    }
    return 0;
}
long bigmod(long b,long p,unsigned int m)
{
    if(p==0) return 1;
    else if(p%2)
    return ((b%m)*(bigmod(b,p-1,m)%m))%m;
    else if(p%2==0)
    return ((bigmod(b,p/2,m)%m)*(bigmod(b,p/2,m)%m))%m;
}
