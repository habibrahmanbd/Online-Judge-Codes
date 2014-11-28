#include<stdio.h>
int main()
{
    int test,i,j,x,y,count,num;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&x,&y);
        if(x==0&&y==0) printf("0\n");
        else if(x==1&&y==1) printf("1\n");
        else if((x>1&&y==x-2)||(x==y))
        {
        num=1;
        for(i=2;i<=x;i++)
        {
            for(j=(i-2);j<=i;j++)
            {
                if(j==i||j==i-2)
                {
                    if(j==i) num+=2;
                    if(j==i-2) { if(num%2==0) --num; else ++num;}
                    if(i==x&&j==y) break;
                }
            }
        }
        printf("%d\n",num);
        }
        else printf("No Number\n");
    }
    return 0;
}
