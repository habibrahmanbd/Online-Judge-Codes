#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int count,len,i,j,caseno=1;
    while(gets(str)){
    if(caseno++>1) printf("\n");
    len=strlen(str);
    int ch[len],arr[len],temp,t,k=0;
    for(i=32;i<128;i++)
    {

        count=0;
        for(j=0;j<len;j++)
        {
            if(str[j]==i)
            count++;
        }
        if(count>0){
        ch[k]=i;
        arr[k]=count;
        k++;
        }
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                t=ch[j];
                ch[j]=ch[i];
                ch[i]=t;
            }
            if(arr[i]==arr[j])
            {
                if(ch[j]>ch[i])
                {
                    t=ch[i];
                    ch[i]=ch[j];
                    ch[j]=t;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    printf("%d %d\n",ch[i],arr[i]);
    }
    return 0;
}
