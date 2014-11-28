#include<stdio.h>
int main()
{
    int t,a,b,c, r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a&&b&&c)>=1&&(a&&b&&c)<=100)
        r=a*b*c;
        printf("%d\n",r);
    }
    return 0;
}
