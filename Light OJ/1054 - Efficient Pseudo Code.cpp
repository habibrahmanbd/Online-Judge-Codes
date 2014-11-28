#include<stdio.h>
#include<math.h>
#define mod 1000000007
int main()
{
    int test,k=0,n,m;
    scanf("%d",&test);
    if(test<=5000)
    {
        while(test--)
        {
            long i,p,count=0,v;
            scanf("%d%d",&n,&m);
            if(n>=1&&m>=0)
            {
                p=pow(n,m);
                v=p;

            for(i=2;i<v;i++)
            {
                if(p%i==0)
                {
                    if(i==p/i)
                        count+=i;
                    else count+=i+(p/i);
                    v=p/i;
                }
            }

            count+=1+p;
            printf("Case %d: %ld\n",++k,count%mod);
            }
        }
    }
    return 0;
}
