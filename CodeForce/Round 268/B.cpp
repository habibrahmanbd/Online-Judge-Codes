#include <iostream>
#include <fstream>
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
typedef long long LL;
const LL mod=1e9+7;
#define N 100005
int main()
{
    int p,q,l,r,a[55],b[55],c[55],d[55],x[55],y[55];
    while(cin>>p>>q>>l>>r){
    for(int i=0;i<p;i++)
        cin>>a[i]>>b[i];
    for(int i=0;i<q;i++)
        cin>>c[i]>>d[i];
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=0;j<q;j++)
            x[j]=c[j]+i,y[j]=d[j]+i;
        bool flag=0;
        for(int j=0;j<q&&!flag;j++)
            for(int k=0;k<p&&!flag;k++)
        {
            if(x[j]>=a[k]&&x[j]<=b[k]) flag=1;
            if(y[j]>=a[k]&&y[j]<=b[k]) flag=1;
            if(a[k]>=x[j]&&a[k]<=y[j]) flag=1;
            if(b[k]>=x[j]&&b[k]<=y[j]) flag=1;
        }
        if(flag)ans++;
    }
    cout<<ans<<endl;
    }
    return 0;
}
