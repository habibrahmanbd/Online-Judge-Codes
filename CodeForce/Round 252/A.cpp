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
    long long n, money,k,i=1,p;
    while(sf("%I64d %I64d",&n,&money)==2)
    {
        long long count=0,sel=0,seler=0,j,q=0;
        long long arr[n];
        for(i=1;i<=n;i++)
        {
            sel=0;
            sf("%I64d",&k);
            for(j=1;j<=k;j++)
            {
                sf("%I64d",&p);
                if(p<money){
                    sel++;
                }
            }
            if(sel>0){
                seler++;
            arr[q++]=i;
            }
        }
        pf("%I64d\n",seler);
        if(seler>0){
        q--;
        sort(arr,arr+q);
        for(i=0;i<=q;i++){
            if(i>0) pf(" ");
            pf("%I64d",arr[i]);
            if(i==q)
                pf("\n");
        }
    }
    }
    return 0;
}
