#include<stdio.h>
int main()
{
    int coca_cola,empty,j=0;
    while(j<10){
        scanf("%d",&empty);
        if(empty==0) break;
        coca_cola=0;
        while(1){
            coca_cola+=empty/3;
            empty=(empty/3)+(empty%3);
            if(empty==2) empty+=1;
            else if(empty==1) break;
        }
        j++;
        printf("%d\n",coca_cola);
    }
    return 0;
}
