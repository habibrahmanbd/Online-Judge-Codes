#include<stdio.h>
int main()
{
    long int n,k,a,b,c;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&k);
        for(a=0;a*a<=50000;a++){
        for(b=a;a*a+b*b<=50000;b++){
        for(c=b;a*a+b*b+c*c<=50000;c++){
            if(k==a*a+b*b+c*c)
            break;
        }
        if(k==a*a+b*b+c*c)
            break;
        }
            if(k==a*a+b*b+c*c)
            break;
        }
        if(k==a*a+b*b+c*c)
            printf("%ld %ld %ld\n",a,b,c);
        if(k!=a*a+b*b+c*c)
            printf("-1\n");
    }
    return 0;
}
//time limit exist
