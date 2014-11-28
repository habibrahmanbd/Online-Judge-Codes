#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[1000],str_new[1000];
    while(1)
    {
        int j=0,i,count,n;
        gets(str);
        if((strcmp(str,"DONE"))==0)
            break;
            n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                str_new[j++]=str[i];
            if(str[i]>='A'&&str[i]<='Z')
                str_new[j++]=str[i]+32;
        }
        str_new[j]='\0';
        n=strlen(str_new);
        count=0;
        for(i=0;i<n/2;i++)
        {
            if(str_new[i]!=str_new[(n-1)-i])
            {
                printf("Uh oh..\n");
                break;
            }
            else  count++;
        }
        if(count==n/2)
            printf("You won't be eaten!\n");
    }
    return 0;
}
