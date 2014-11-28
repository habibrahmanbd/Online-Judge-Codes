#include<stdio.h>
int main()
{
    int test,n,p,q,i,k,l,temp;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d%d",&n,&p,&q);
        int a[n],j,sum=0,count=0;
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(k=0;k<n-1;k++)
            for(l=k+1;l<n;l++)
        {
            if(a[k]>a[l])
            {
                temp=a[l];
                a[l]=a[k];
                a[k]=temp;
            }
        }
        for(j=0;j<p&&j<n;j++)
        {
            sum+=a[j];
            if(sum<=q)
                count++;
            else break;
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
