#include<stdio.h>
int main()
{
    int c,p,q,r;
    while(1)
    {
        printf("1.p^q(v)!r\n2.(p(+)r)(+)(q(+r))\n3.!(p^q)\n4.!p(v)!q\n");
        scanf("%d",&c);
        if(c==1)
        {
            printf("p\tq\tr\tp^q\t!r\tq(v)!r\tp^q(v)!r\n");
            for(p=0; p<=1; p++)
                for(q=0; q<=1; q++)
                    for(r=0;r<=1;r++)
                {
                    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",p,q,r,p&q,!r,q|!r,p&q|!r);
                }
        }
        else if(c==2)
        {
            printf("p\tq\tr\t(p(+)r)\t(q(+)r)\tp(+)r(+)(q(+)r)\n");
            for(p=0; p<=1;p++)
                for(q=0; q<=1;q++)
                    for(r=0;r<=1;r++)
                {
                    printf("%d\t%d\t%d\t%d\t%d\t%d\n",p,q,r,p&r,q&r,(p&r)^(q&r));
                }
        }
        else if(c==3)
        {
            printf("p\tq\t!p\tp^q\t!(p^q)\n");
            for(p=0; p<=1; p++)
                for(q=0; q<=1; q++)
                {
                    printf("%d\t%d\t%d\t%d\t%d\n",p,q,!p,p^q,!(p^q));
                }
        }
        else if(c==4)
        {
            printf("p\tq\t!p\t!q\t!p(v)!q\n");
            for(p=0; p<=1; p++)
                for(q=0; q<=1; q++)
                {
                    printf("%d\t%d\t%d\t%d\t%d\n",p,q,!p,!q,!p|!q);
                }
        }
        else break;
    }
    return 0;
}
