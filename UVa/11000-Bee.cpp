#include<stdio.h>
int main()
{
    unsigned long long total,temp,male,female;
    int i,count,test;
    while(scanf("%d",&test))
    {
        if(test<0) break;
        male=0,female=0,temp=0,total=0;
        for(i=0;i<=test;i++)
        {
            if(i==0)
            {
                male=0;
                female=1;
                total=1;
                temp=1;
            }
            else
            {
                female=male+1;
                male=temp;
                total=male+female;
                temp=total;
            }
        }
        printf("%llu %llu\n",male,total);
    }
    return 0;
}
