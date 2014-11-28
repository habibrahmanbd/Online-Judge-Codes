#include <stdio.h>
int main()
{
    char s1[20000],s2[20000];
    int i,j;
    while(scanf("%s %s",s1,s2)==2)
    {
        i = 0;
        for(j=0;s2[j]&&s1[i];j++)
            if(s2[j]==s1[i])
                i++;
        if(!s1[i])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
