#include<stdio.h>
int main()
{
    long long n,m,a;
    while((scanf("%I64d%I64d%I64d",&n,&m,&a))!=EOF)
    {
        printf("%I64d\n",((long long)((n+a-1)/a))*((long long)((m+a-1)/a)));
    }
    return 0;
}
