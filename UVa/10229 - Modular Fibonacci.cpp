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
long long int fibo_mod(long n, long m)
{
    if(n==0)
        return 0;
    else if(n==1)
        return (1%m);
    else
        return ((fibo_mod(n-1, m)%m) + (fibo_mod(n-2,m)%m))%m;
}
int main()
{
    long int n, m;
    while(sf("%ld%ld",&n,&m)==2)
    {
        m=pow(2,m);
        long long int r = fibo_mod(n,m );
        pf("%ll\n",r);
    }
    return 0;
}
