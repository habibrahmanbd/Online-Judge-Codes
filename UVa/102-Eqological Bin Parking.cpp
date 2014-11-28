/**********************************
Programmer: HABIBUR RAHMAN HABIB;
Date: 17th oct,2013;
About: Eqological Bin Parking;
***********************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i=0;
    int g[3],b[3],c[3];
    while(i<3)
    scanf("%d%d%d",&g[i],&b[i],&c[i++]);
    int s[6];
    char *s_name[6];
    s[0]=g[1]+g[2]+b[0]+b[2]+c[0]+c[1];
    s_name[0]="GBC";
    s[1]=g[1]+g[2]+c[0]+c[2]+b[0]+b[1];
    s_name[1]="GCB";
    s[2]=b[1]+b[2]+g[0]+g[2]+c[0]+c[1];
    s_name[2]="BGC";
    s[3]=b[1]+b[2]+c[0]+c[2]+g[0]+g[1];
    s_name[3]="BCG";
    s[4]=c[1]+c[2]+g[0]+g[2]+b[0]+b[1];
    s_name[4]="CGB";
    s[5]=c[1]+c[2]+b[0]+b[2]+g[0]+g[1];
    s_name[5]="CBG";
    int m=0,m_in;
    char result[10];
    for(i=0; i<6;i++)
    {
        if(s[i]>m)
        {
            m=s[i];
            strcpy(result, s_name[i]);
        }
    }
    printf("%s %d\n",result, m);
    return 0;
}
