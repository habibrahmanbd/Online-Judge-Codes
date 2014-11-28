#include<stdio.h>
int main()
{
    int test,n,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&n);
        int a[n],count,rem,j,mile=0,juice=0;
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=0;j<n;j++)
        {
            count=a[j]/30;
            rem=a[j]%30;
            if(rem>=0) count++;
            mile+=10*count;
            count=a[j]/60;
            rem=a[j]%60;
            if(rem>=0) count++;
            juice+=15*count;
        }
        if(mile<juice)
            printf("Case %d: Mile %d\n",i,mile);
        if(juice==mile)
            printf("Case %d: Mile Juice %d\n",i,mile);
        if(juice<mile)
            printf("Case %d: Juice %d\n",i,juice);
    }
    return 0;
}
