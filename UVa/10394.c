#include<stdio.h>
int main()
{
    long int p,i=0,a,k,p_1,p_2,c,t;
    while((scanf("%ld",&a))==1)
    if(a>0 && a<10001)
    {
        if(a==1)
        {
        p_1=3;
        p_2=5;
        }
        else
        {
        t=a*2;
        for(p=1;i<=t;p++)
        {
            c=0;
            for(k=1;k<=p;k++)
            {
                if(p%k==0)
                    c++;
            }
            if(c==2)
            {
                i++;
                if(i==t-1)
                    p_1=p;
                if(i==t)
                    p_2=p;
            }
        }
        }
        printf("(%d, %d)\n",p_1,p_2);
    }
    return 0;
}
