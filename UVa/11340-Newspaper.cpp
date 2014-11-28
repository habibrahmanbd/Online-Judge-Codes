#include<stdio.h>
#include<string.h>
int main()
{
    int test,k;
    while((scanf("%d\n",&test))==1)
    while(test--)
    {
        scanf("%d\n",&k);
        int a[k],i,value=0,m,j,l;
        char ch[k],c,str[10000];
        for(i=0;i<k;i++)
            scanf("%c%d\n",&ch[i],&a[i]);
        scanf("%d\n",&m);
        while(m--)
        {
            gets(str);
            l=strlen(str);
            for(i=0;i<l;i++)
            {
                for(j=0;j<k;j++)
                {
                    if(str[i]==ch[j])
                    {
                        value+=a[j];
                    }
                }
            }
        }
        printf("%.2lf$\n",(double)value/100.00);
    }
    return 0;
}
