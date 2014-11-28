#include<stdio.h>
int main()
{
    int test,l,temp,i,j;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&l);
        int a[l];
        for(i=0;i<l;i++)
            scanf("%d",&a[i]);
        int count=0;
        for(i=0;i<l-1;i++)
            for(j=i+1;j<l;j++)
                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    count++;
                }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
