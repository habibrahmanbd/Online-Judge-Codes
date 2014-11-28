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
    long long n,x;
    while(sf("%I64d %I64d",&n,&x)==2)
    {
        long long sum=0,t=x,temp;
        long long arr[n];
        for(int i=0;i<n;i++)
            sf("%I64d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(x-i>1)
            sum+=arr[i]*(x-i);
            else
                sum+=arr[i]*1;
        }
        pf("%I64d\n",sum);
    }
    return 0;
}
