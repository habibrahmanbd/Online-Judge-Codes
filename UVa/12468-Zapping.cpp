#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,res1,res2,t1,t2;
    while(scanf("%d%d",&a,&b))
    {
        if(a<0&&b<0) break;
        res1=abs(a-b);
        t1=a>b?a:b;
        t2=a>b?b:a;
        res2=(100-t1)+t2;
        if(res1<=res2)
            printf("%d\n",res1);
        else
            printf("%d\n",res2);
    }
    return 0;
}
