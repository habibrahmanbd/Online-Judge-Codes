#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    long int test, a[3],i,temp,j,caseno=0;
    scanf("%ld",&test);
    while(test--)
    {
        for(i=0;i<3;i++)
         scanf("%ld",&a[i]);
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<3;j++)
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("Case %ld: %ld\n",++caseno,a[1]);
    }
    return 0;
}
