#include<stdio.h>
int main()
{
    int test,i,caseno=1;
    while(scanf("%d",&test)==1)
    {
        if(test==0) break;
        int a[test],sum=0,temp;
        for(i=0;i<test;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        temp=sum/test;
        sum=0;
        for(i=0;i<test;i++)
            if(a[i]>temp)
                sum+=(a[i]-temp);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",caseno++,sum);
    }
    return 0;
}
