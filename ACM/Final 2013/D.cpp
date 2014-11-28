#include<stdio.h>
int main()
{
    long int a[4],t,count,i,temp,j=0;
    scanf("%ld",&t);
    if(t<=100)
    {
    while(j<t)
    {
    scanf("%ld%ld%ld%ld",&a[0],&a[1],&a[2],&a[3]);
    if((a[0]+a[1]+a[2]+a[3])<=1000000)
    {
        if(a[3]==0&&(a[0]||a[1]||a[2])==0)
            printf("Case %ld: 0\n",(j++)+1);
        else if(a[3]==0)
        {
            for(i=0;i<3;i++)
                if(a[0]>a[i]){
                    temp=a[0];
                    a[0]=a[i];
                    a[i]=temp;
                }

            printf("Case %ld: %ld\n",(j++)+1,a[0]);
        }
        else
        {
            count=0;
            while(a[3]>0)
            {
            if(a[0]==0&&a[3]>0)
            {
            a[3]--;
            if(a[1]==0&&a[3]>0)
            {
                a[3]--;
                if(a[2]==0&&a[3]>0){a[3]--; count++;}
                else{if(a[2]>0) {a[2]--; count++;}}
            }
            else
            {
                if(a[1]>0)
                {
                a[1]--;
                if(a[2]==0&&a[3]>0){a[3]--; count++;}
                else{ if(a[2]>0) {a[2]--; count++;}}
                }

            }
            }
            else
            {
                if(a[0]>0)
                {
                a[0]--;
                if(a[1]==0&&a[3]>0)
                {
                a[3]--;
                if(a[2]==0&&a[3]>0){a[3]--; count++;}
                else{if(a[2]>0) {a[2]--; count++;}}
                }
                else
                {
                if(a[1]>0)
                {
                a[1]--;
                if(a[2]==0&&a[3]>0){a[3]--; count++;}
                else{if(a[2]>0) {a[2]--; count++;}}
                }

                }
                }

            }
            }
              printf("Case %ld: %ld\n",(j++)+1,count);
        }
    }
    }
    }
    return 0;
}
