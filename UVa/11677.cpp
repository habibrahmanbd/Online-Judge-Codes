/**********************************
Programmer: HABIBUR RAHMAN HABIB;
Date: 22th Oct,2013;
About: Alarm Clock;
***********************************/
#include<stdio.h>
int main()
{
    int h_s, m_s, h_f, m_f,r_h,r_m;
    while(scanf("%d%d%d%d",&h_s,&m_s,&h_f,&m_f)==4)
    {
        if(h_s==0&&m_s==0&&h_f==0&&m_f==0)
            break;
        if(h_s>=0&& h_s<=23&& h_f>=0&& h_f<=23&&  m_s>=0&& m_s<=59&&  m_f>=0&& m_f<=59)
        {
            if(m_f<m_s)
        {
            h_f-=1;
            m_f+=60;
        }
        if(h_f<h_s)
            h_f+=24;
        r_h=h_f-h_s;
        r_m=(r_h*60)+(m_f-m_s);
        printf("%d\n",r_m);
        }
    }
    return 0;
}
