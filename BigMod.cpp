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
#define SF scanf
#define PF printf
#define FOR(p, n, m) for(long int i=p; i<n; i+=m)
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define MOD 100000007
#define INF 1<<29
using namespace std;
long int BMD(long int a, long int b)
{
    if(b>1)
        if(b%2) return (a%MOD*BMD(a,b-1)%MOD)%MOD;
        else{
            int x=BMD(a,b/2);
            return (x*x)%MOD;
        }
    else return a%MOD;
}
int main()
{
    long int a,b;
    cin>>a>>b;
    cout<<BMD(a,b);

}
