#include<stdio.h>
int main()
{
    int i,count=0,l;
    char ch;
    while((scanf("%c",&ch))==1)
    {
        if(ch=='"')
            {
                count++;
                if(count%2)
                printf("``");
                else printf("''");
                if(count==2)
                    count=0;
            }
            else printf("%c",ch);
    }
    return 0;
}
