#include<stdio.h>
int main()
{
    int a,b,c,m,n,sum,i,j,y;
    scanf("%d",&m);
    i=0;
    while(i<m){
        j=0;
        scanf("%d",&n);
        sum=0;
        while(j<n){
            scanf("%d%d%d",&a,&b,&c);
            y=a*c;
            sum+=y;
            j++;
        }
        printf("%d\n",sum);
        i++;
    }
    return 0;
}
