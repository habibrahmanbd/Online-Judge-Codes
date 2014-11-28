#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    long long a,b,c,n;
    scanf("%lld",&n);
    if(n<=1000)
    while(n--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a&&b&&c)>=1&&(a&&b&&c)<=1000)
        {
        if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(b*b)))
            printf("YES\n");
        else printf("NO\n");
        }
    }
    return 0;
}
