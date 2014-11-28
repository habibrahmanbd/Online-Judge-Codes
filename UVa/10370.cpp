#include<stdio.h>
int main()
{
    int C;
    scanf("%d",&C);
    while(C--)
    {
        int n;
        scanf("%d",&n);
        if(n>=1 && n<=1000)
        {
        int sum=0,i=0,a[n],temp;
        while(i<n)
        {
            scanf("%d",&temp);
            a[i]=temp;
            sum+=temp;
            i++;
        }
        i=0;
        float avr;
        avr=(float)sum/n;
        float count=0.0;
        while(i<n)
        {
            if(a[i]>avr)
                count++;
            i++;
        }
        printf("%0.3f%%\n",(float)((count/n)*100));
        }
    }
    return 0;
}
