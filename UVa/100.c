#include<stdio.h>
int main()
{
    int i,j,k,c,temp,n,max;
    while(scanf("%d%d",&i,&j)==2){
            max=0;
            int x,y;
    x=i;
    y=j;
        if(i>j){
            temp=i;
            i=j;
            j=temp;
        }
        for(k=i;k<=j;k++){
                c=1;
                n=k;
        while(n!=1){
            if((n%2)==1){
                n=(3*n)+1;
            }
            else{
                n/=2;
                }
            c++;
        }
        if(c>max) max=c;
        }
        printf("%d %d %d\n",x,y,max);
    }
    return 0;
}
