#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    printf("Lumberjacks:\n");
    while(test--)
    {
        int i,j,a[10],count=0,count1=0;
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        for(i=0;i<9;i++)
            for(j=i+1;j<10;j++)
                if(a[i]>a[j])
                    count++;
           for(i=0;i<9;i++)
            for(j=i+1;j<10;j++)
                if(a[i]<a[j])
                    count1++;
        count=count<count1?count:count1;
           if(count==0)
                printf("Ordered\n");
           else
            printf("Unordered\n");
    }
    return 0;
}
