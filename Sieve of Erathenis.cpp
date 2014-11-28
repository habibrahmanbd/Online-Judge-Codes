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
#define SIEVE bool status[n+1];FOR(4,n+1,2)status[i]=1;FOR(3,sqrt(n),2){if(!status[i]){for(long j=i*i; j<n+1; j+=i)status[j]=1;}}
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define INF 100007
using namespace std;
int main()
{
    long int n;
    cin>>n;
    SIEVE;
    FOR(2,n+1,1)
    if(!status[i])
        cout<<i<<endl;
    return 0;
}
