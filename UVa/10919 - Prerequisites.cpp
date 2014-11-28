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
    int  k ,m;
    while(sf("%d",&k)&&k)
    {
        sf("%d",&m);
        int fridel[k];
        bool flag[m];
        for(int i=0;i<k;i++)
            sf("%d",&fridel[i]);
        for(int i=0;i<m;i++)
        {
            int count=0,bn,atleast,temp;
            sf("%d%d",&bn,&atleast);
            for(int p=0;p<bn;p++)
            {
                sf("%d",&temp);
                for(int j=0;j<k;j++)
                if(fridel[j]==temp)
                    count++;
            }
            //pf("count: %d\n",count);
            if(count>=atleast)
                flag[i]=true;
            else
                flag[i]=false;
        }
        int flag_count=0;
        for(int i=0;i<m;i++)
            if(flag[i]==true)
                flag_count++;
        if(flag_count==m)
            pf("yes\n");
        else
            pf("no\n");
    }
    return 0;
}
