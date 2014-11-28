#include<stdio.h>
#include<string.h>
int main()
{
    char str[103];
    while(gets(str))
    {
        int k=0,i,j,l=strlen(str);
        for(i=0;i<l;i++)
        {
            if(str[i]>='0'&&str[i]<='9')
                k+=str[i]-'0';
            if(str[i]=='!'){
                printf("\n");
                k=0;
            }
            if(str[i]=='b')
            {
                for(j=0;j<k;j++)
                    printf(" ");
                k=0;
            }
            if(!(str[i]>='0'&&str[i]<='9')&&str[i]!='b'&&str[i]!='!'){
                for(j=0;j<k;j++)
                printf("%c",str[i]);
                k=0;
            }
        }
        printf("\n");
    }
    return 0;
}
