/**********************************
Programmer: HABIBUR RAHMAN HABIB;
Date: 23th oct,2013;
About: GCD LCM;
***********************************/
#include<stdio.h>
int main()
{
    long int g,l,a,b,i,j,gcd,lcm,temp,test1,test2,t;
    scanf("%d",&t);
    if(t<=100)
    {
    level:
    while(t--)
        {

    scanf("%d%d",&g,&l);
    test2=g*l;
    for(i=g; i<=(g*l); i++)
    {
        for(j=i; j<=(g*l); j++)
        {
            test1=i*j;
            if(test1==test2)
            {
                a=i;
                b=j;
                while (a!=0)
                   {
                   temp= a;
                   a = b % a;
                   b = temp;
                   }
                gcd=temp;
                lcm=(test1/gcd);
                if(gcd==g && lcm==l)
                {
                   printf("%d %d\n",i,j);
                   goto level;
                }
                else
                {
                printf("-1\n");
                goto level;
                }
            }
        }
    }
}
}
return 0;
}
