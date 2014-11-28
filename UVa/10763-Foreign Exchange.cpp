#include<stdio.h>
int main()
{
    long int test;
    while((scanf("%ld",&test))==1)
    {
        if(test==0) break;
        if(test%2==0)
        {
            int i,a,b,c,d,count=0;
            for(i=0;i<test/2;i++)
            {
                scanf("%d%d",&a,&b);
                scanf("%d%d",&c,&d);
                if(a==d&&b==c)
                    count++;
            }
            if(count==test/2)
                printf("YES\n");
            else printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
//not solved....
