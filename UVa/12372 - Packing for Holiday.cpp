#include<stdio.h>
int main()
{
    int L,W,H,T,caseno=0;
    while((scanf("%d",&T))==1)
    if(T<=100)
    {
        while(T--)
        {
            scanf("%d%d%d",&L,&W,&H);
                if(L<=20&&W<=20&&H<=20)
                        printf("Case %d: good\n",++caseno);
                        else printf("Case %d: bad\n",++caseno);
        }
    }
    return 0;
}
