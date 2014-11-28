#include<stdio.h>
int main()
{
    int n,k;
    while((scanf("%d%d",&n,&k))==2)
    {
    int butt=0,cig=0;
    while(n>0 && k>1)
    {
        cig+=n;
        butt+=n;
        n=butt/k;
        butt%=k;
    }
    printf("%d\n",cig);
    }
    return 0;
}
