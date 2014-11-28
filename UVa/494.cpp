/**************************************
* Author: Habibur Rahman Habib	      *
* Description:                        *
* Date: 02th November 2013	          *
***************************************/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int i=0,a[36767],count,j,n;
    while((scanf("%d",&a[i++]))==1)
    n=i;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("%d %d\n",a[i],count);
    }
    return 0;
}
