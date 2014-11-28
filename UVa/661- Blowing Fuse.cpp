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
int compare_ints (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,m,c;
    int seq=1;
    while(sf("%d%d%d",&n,&m,&c)&&!(n==0&&m==0&&c==0))
    {
        int cap[n];
        bool toggle[n];
        int t;
        for(int i=0;i<n;i++) toggle[i]=false;
        for(int i=0;i<n;i++)
        {
            sf("%d",&t);
            cap[i]=t;
        }
        int rp=0;
        int max_cap=0;
        for(int i=0;i<m;i++)
        {
            sf("%d",&t);
            t--;
            if(toggle[t]==false){
                toggle[t]=true;
                rp+=cap[t];
                if(max_cap<rp)
                max_cap=rp;
            }
            else if(toggle[t]==true){
                toggle[t]=false;
                rp-=cap[t];
            }
        }
        //if(seq>1) pf("\n");
        pf("Sequence %d\n",seq++);
        if(max_cap<=c){
            //pf("%d\n",sum_cap);
            pf("Fuse was not blown.\n");
            pf("Maximal power consumption was %d amperes.\n\n",max_cap);
        }
        else
            pf("Fuse was blown.\n\n");
    }
    return 0;
}
