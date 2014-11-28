#include<stdio.h>
//#include<string.h>
#include<math.h>
int main()
{
    long int sum,ans,a[10000],b,c,d,i,j,k,l,m,n;
    //char ch;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        //scanf("%c",&ch);
    }
    for(j=0;j<n;j++)
    {
        b=a[j];
        c=pow(2,b-1)*(pow(2,b)-1);
        sum=0;
        for(k=1;k<c;k++)
        {
            for(l=1;l<=c;l++)
            {
                ans=k*l;
                if(ans==c)
                {
                    sum+=k;
                }
            }
        }
        if(sum==c)
        printf("Yes\n");
        else
        printf("No\n");
    }
}
