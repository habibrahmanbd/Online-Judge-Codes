#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int cheak,test,blance,caseno=0;
    while((scanf("%d",&test))==1)
    {
        if(test==0) break;
        blance=0;
        while(test--)
        {
            scanf("%d",&cheak);
            if(cheak>=1&&cheak<=99)
                blance++;
            if(cheak==0)
                blance--;
        }
        printf("Case %d: %d\n",++caseno,blance);
    }
    return 0;
}
