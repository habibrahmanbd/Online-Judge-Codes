#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char str[101];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(str);
        int count=0;
        int len = strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='Q'||str[i]=='R')
                count++;
            else if(str[i]=='B')
                count+=2;
        }
        printf("%d\n",count);
    }
    return 0;
}
