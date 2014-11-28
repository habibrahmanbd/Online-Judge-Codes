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
    int n,v,i;
    while(sf("%d%d",&n,&v)==2){
        int a[n+1],b[n+1];
        int max=0;
    for(i=1;i<=n;i++){
        sf("%d%d",&a[i],&b[i]);
        if(a[i]>max)
            max=a[i];
    }
    int collect=0;
    bool flag=false;
    int l=0;
    for(i=1;i<=a[l]+1; i++)
    {
        collect+=v;
        b[i]=b[i]-v;
        if(i==a[l]+1){
            l++;
            if(l==n)
                break;
        }
    }
    pf("%d\n",collect);
    }
}
