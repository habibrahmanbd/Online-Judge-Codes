/**********************************
Programmer: HABIBUR RAHMAN HABIB;
Date: 23th March,2013;
About: The 3n+1 problem;
***********************************/
#include<stdio.h>
main()
{
    long int i,j,n,x,y,c,maxi;
    while((scanf("%d%d",&i,&j))==2)
    {

        if(i<1000000&& i>0 && j<1000000&& j>0)
        {
        x=i;
        y=j;
        if(j<i)
        {
            long int temp=i;
            i=j;
            j=temp;
        }
        maxi=0;
        long int num;
    for(num=i; num<=j;num++)
    {
        c=1;
        n=num;
        while(n!=1)
        {
            if(n%2==0)
            {
                n/=2;
            }
            else{
                n=((3*n)+1);
            }
            c++;
        }
        if(c>maxi)
        maxi=c;
    }
    printf("%d %d %d\n",x,y,maxi);
        }
    }
    return 0;
}
