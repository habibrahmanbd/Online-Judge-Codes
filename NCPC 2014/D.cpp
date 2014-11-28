#include<stdio.h>
#define M 1000000007
long long int GCD(long long int x,long long int y)
{
   long long int temp=1;
    while(x!=0)
    {
        temp=x;
        x=y%x;
        y=temp;
    }
    return y;
}
int main()
{
    long long int n,x,t,c,A,B,k,i,G;
    scanf("%lld ",&t);
        for(k=1;k<=t;k++)
        {
            A=B=1;
            scanf("%lld %lld",&n,&x);
            for(i=0;i<n;i++)
            {
                scanf("%lld",&c);
                c=x-c;
                A=((A%M)*c)%M;
                B=((B%M)*x)%M;

            }
                if(k!=1) printf("\n");
            if(A==0)
                printf("Case %lld: 0",k);
            else if(A==B)
                printf("Case %lld: 1",k);
           else {
            G=GCD(A,B);
            A=((A%M)/(G%M))%M;
            B=((B%M)/(G%M))%M;
            printf("Case %lld: %lld/%lld",k,A,B);
           }

        }
    return 0;
}


