#include<stdio.h>
int main()
{
    int prime,i=0,input,k,prime1,prime2,c;
    scanf("%d",&input);
    int test=input*2;
        for(prime=1;i<=test;prime++)
        {
            c=0;
            for(k=2;k<=prime-1;k++)
            {
                if(prime%k==0) c++;
            }
            if(c==0)
            {

                if(i==(test-1)) prime1=prime;
                if(i==test) prime2=prime;
                i++;
            }
        }
    printf("%d, %d\n",prime1,prime2);
    return 0;
}
