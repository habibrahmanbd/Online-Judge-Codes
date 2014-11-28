#include<stdio.h>
#include<string.h>
int main()
{
    int m,a,r,g,i,t,test,n,count;
    char str[605];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",str);
        m=0;a=0;r=0;g=0;i=0;t=0;count=0;
        for(n=0;str[n];n++)
        {
            if(str[n]=='M')
                m++;
            if(str[n]=='A')
                a++;
            if(str[n]=='R')
                r++;
            if(str[n]=='G')
                g++;
            if(str[n]=='I')
                i++;
            if(str[n]=='T')
                t++;
        }
        if((m&&t&&i&&g)>=1&&a>=3&&r>=2)
        {
            while((m&&t&&i&&g)>=1&&a>=3&&r>=2){
                count++;
                m--;a-=3;r-=2;g--;i--;t--;
            }

            printf("%d\n",count);
        }
        else
        printf("0\n");
    }
    return 0;
}
