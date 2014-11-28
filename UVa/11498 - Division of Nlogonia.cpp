#include<stdio.h>
int main()
{
    int k,m,n,x,y,rx,ry;
    while(1)
    {
        scanf("%d",&k);
        if(k==0) break;
        scanf("%d %d",&m,&n);
        while(k--)
        {
            scanf("%d %d",&x,&y);
            rx=x-m;
            ry=y-n;
            if(rx==0||ry==0)
                printf("divisa\n");
            else if(rx>0&&ry>0)
                printf("NE\n");
            else if(rx<0&&ry>0)
                printf("NO\n");
            else if(rx<0&&ry<0)
                printf("SO\n");
            else if(rx>0&&ry<0)
                printf("SE\n");
        }
    }
    return 0;
}
