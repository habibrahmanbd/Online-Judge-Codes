#include<stdio.h>
int main()
{
    int n,temp,k,ptr;
    scanf("%d",&n);
    int a[n+1];
    a[0]=-9999;
    for(k=1;k<=n;k++)
        scanf("%d",&a[k]);
    for(k=2;k<=n;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
    for(k=1;k<=n;k++)
        printf("%d ",a[k]);
    return 0;
}
