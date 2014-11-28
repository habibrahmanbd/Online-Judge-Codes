#include<iostream>
using namespace std;
int main()
{
    int m,a,r,g,i,t,test,l,i;
    cin>>test;
    while(test--)
    {
        cin>>str;
        l=strlen(str);
        m=0,a=0,r=0,g=0,i=0,t=0,count=0;
        for(i=0;i<l;i++)
        {
            if(str[i]=='M')
            {
                m++;
            }
            if(str[i]=='A')
            {
                a++;
            }
            if(str[i]=='R')
            {
                r++;
            }
            if(str[i]=='G')
            {
                g++;
            }
            if(str[i]=='I')
            {
                i++;
            }
            if(str[i]=='T')
            {
                t++;
            }
        }
        if(m>0&&a>2&&r>1&&g>0&&i>0&&t>0)
        {
            while(m>0&&a>2&&r>1&&g>0&&i>0&&t>0)
                count++;
            printf("%d\n",count);
        }
        else printf("0\n");
    }
    return 0;
}
