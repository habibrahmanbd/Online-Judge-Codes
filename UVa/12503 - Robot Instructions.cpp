#include<stdio.h>
#include<string.h>
int main()
{
    int test,n,p,i,temp,l;
    char str[100][10],arr[10];
    scanf("%d",&test);
    while(test--)
    {
        p=0;
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
            if(strcmp(str[i],"LEFT")==0) p--;
            else if(strcmp(str[i],"RIGHT")==0) p++;
            else
            {
                scanf("%s%d",arr,&temp);
                strcpy(arr,str[--temp]);
                if(strcmp(arr,"LEFT")==0) p--;
                else if(strcmp(arr,"RIGHT")==0) p++;
                strcpy(str[i],arr);
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
