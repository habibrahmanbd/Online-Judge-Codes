#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    while(gets(str))
    {
        int i,len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='1'||str[i]=='0'||str[i]=='-')
                printf("%c",str[i]);
            else if(str[i]>='A'&&str[i]<='C')
                printf("2");
            else if(str[i]>='D'&&str[i]<='F')
                printf("3");
            else if(str[i]>='G'&&str[i]<='I')
                printf("4");
            else if(str[i]>='J'&&str[i]<='L')
                printf("5");
            else if(str[i]>='M'&&str[i]<='O')
                printf("6");
            else if(str[i]>='P'&&str[i]<='S')
                printf("7");
            else if(str[i]>='T'&&str[i]<='V')
                printf("8");
            else if(str[i]>='W'&&str[i]<='Z')
                printf("9");
        }
        printf("\n");
    }
    return 0;
}
