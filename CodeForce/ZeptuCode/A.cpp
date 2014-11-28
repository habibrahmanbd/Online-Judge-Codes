#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <list>
#include <queue>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <sstream>
#include <bitset>
#include <set>
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n,x;
    while(sf("%d%d",&n,&x)==2)
    {
        int h[n],m[n],t[n],i;
        for(i=0;i<n;i++)
            sf("%d%d%d",&t[i],&h[i],&m[i]);
        int c_count=0,f_count=0,count=0;
        bool flag[n];
        for(i=0;i<n;i++){
        flag[i]=false;
        for(int j=i;j<n;j++)
            {
                if(m[i]<m[j])
                {
                    int temp;
                    temp=h[i];
                    h[i]=h[j];
                    h[j]=temp;

                    temp= t[i];
                    t[i]=t[j];
                    t[j]=temp;

                    temp=m[i];
                    m[i]=m[j];
                    m[j]=temp;
                }
            }

        }

        for(int k=0;k<n;k++){
         c_count=f_count=0;
         for(i=0;i<n;i++)
         {
             if(x>=h[i]&&!flag[i])
             {
                 if(t[i]==0&& c_count<1)
                 {
                     c_count++;
                     count++;
                     x+=m[i];
                     flag[i]=true;
                 }
                 else if(f_count<1)
                 {
                     f_count++;
                     count++;
                     x+=m[i];
                     flag[i]=true;
                 }
             }
         }
        }
        pf("%d\n",count);
    }
    return 0;
}
