#include<stdio.h>
int main()
{
    int a[10]={2,5,1,8,9,2,3,4,0,1};
    int i,j,n=10;
    for(i=0;i<n-1;i++)
    {
        j=0;
        while(j<=n-i)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            j++;
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
