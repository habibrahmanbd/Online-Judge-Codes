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
long long gcd(long long n,long long m)
{
    return m==0?n:gcd(m,n%m);
}
int main()
{
    long long t,n,m;
    sf("%lld",&t);
    while(t--)
    {
        long long total=0,odd=0,i,j;
        sf("%lld %lld",&n,&m);
        odd=((n-(n/2))*(m/2))+((n/2)*(m-(m/2)));
        total=n*m;
        long long g=gcd(odd,total);
        pf("%lld/%lld\n",(odd/g),(total/g));
    }
    return 0;
}
