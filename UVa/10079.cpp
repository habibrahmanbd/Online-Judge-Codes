#include<stdio.h>
int main()
{
    long long int N;
    while((scanf("%lld",&N)))
    if(N>=0 && N<=210000000)
        printf("%lld\n",((N*N)+N+2)/2);
        else break;
    return 0;
}
