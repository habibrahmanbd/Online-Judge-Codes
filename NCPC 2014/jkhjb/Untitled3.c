#include<stdio.h>
#define M 1000000007
long int GCD(long int x,long int y)
{
   long int temp=1;
    if(x==0) return y;
    if(y==0) return x;
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
    long int n,x,t,c,A,B,k,i,G;
    scanf("%ld ",&t);
        for(k=1;k<=t;k++)
        {
            A=B=1;
            scanf("%ld %ld",&n,&x);
            for(i=0;i<n;i++)
            {
                scanf("%ld",&c);
                c=x-c;
                A=A*c;
                if(A>=M)
                    A=A%M;
                B=B*x;
                if(B>=M)
                 B=B%M;
            }
            if(A==0)
                printf("Case %ld: 0\n",k);
            else if(A==B)
                printf("Case %ld: 1\n",k);
           else {
            G=GCD(A,B);
            A=(A/G)%M;
            B=(B/G)%M;
            printf("Case %ld: %ld/%ld\n",k,A,B);
           }

        }
    return 0;
}


