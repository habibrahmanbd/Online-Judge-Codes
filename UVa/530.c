#include<istream>
int main()
{
    int64_t n,r;
    int64_t fact(int64_t n);
    while((scanf("%I64d%I64d",&n,&r))==2)
    {
        if(n==0 &&r==0) break;
        printf("%lld\n",fact(n));
        printf("%lld\n",fact(r));
        printf("%lld\n",fact(n-r));
        printf("%lld\n",(fact(n)/(fact(r)*fact(n-r))));
    }
    return 0;
}
long long int fact(int n)
{
    if(n<=1) return 1;
    else return (n*fact(n-1));
}
