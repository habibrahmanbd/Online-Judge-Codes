#include<stdio.h>
#include<string.h>
int main()
{
    int test,num,count;
    scanf("%d\n",&test);
    while(test--)
    {
        count=0;
        char str[1000000];
        gets(str);
        int i;
        str[-1]=' ';
        for(i=0;i<strlen(str);i++){
            if(str[i]==' ') continue;
            else if(str[i]!=(' '||'\n')&&str[i-1]==' ')
             count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
