#include<stdio.h>
int main()
{
    int c_dd,c_mm,c_yyyy,b_dd,b_mm,b_yyyy,caseno=1,tcase,rem;
    int r_dd,r_mm,r_yyyy;
    char ch;
    scanf("%d\n",&tcase);
    while(tcase--)
    {
        scanf("%d/%d/%d",&c_dd,&c_mm,&c_yyyy);
        scanf("%d/%d/%d",&b_dd,&b_mm,&b_yyyy);
        if(c_dd<b_dd)
        {
            c_mm--;
            r_dd=c_dd-b_dd+30+1;
            if(r_dd>30){
            r_dd=r_dd-30;
            c_mm++;
            }
            if(c_mm<b_mm)
            {
            c_yyyy--;
            r_mm=c_mm-b_mm+12;
            if(r_mm>12){
            r_mm=r_mm-12;
            c_yyyy++;
            }
            }
            else
            {
                r_mm=c_mm-b_mm;
                if(r_mm>12){
                r_mm=r_mm-12;
                c_yyyy++;
                }
            }
            r_yyyy=c_yyyy-b_yyyy;

        }
        else
        {
            r_dd=c_dd-b_dd+1;
            if(r_dd>30){
            r_dd=r_dd-30;
            c_mm++;
            }
            if(c_mm<b_mm)
            {
            c_yyyy--;
            r_mm=c_mm-b_mm+12;
            if(r_mm>12){
            r_mm=r_mm-12;
            c_yyyy++;
            }
            }
            else
            {
                r_mm=c_mm-b_mm;
                if(r_mm>=12){
                r_mm=r_mm-12;
                c_yyyy++;
                }
            }
            r_yyyy=c_yyyy-b_yyyy;

        }
        if(r_yyyy<0)
            printf("Case #%d: Invalid birth date\n",caseno++);
        else if(r_yyyy>130)
            printf("Case #%d: Check birth date\n",caseno++);
        else
            printf("Case #%d: %d\n",caseno++,r_yyyy);
    }
    return 0;
}
