#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int test,n;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int a[n],temp,j,i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        printf("%d\n",(a[n-1]-a[0])*2);
    }
    return 0;
}
