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
#define FOR(p, n,l) for(long int i=p; i<n; i+=l)
#define FOR_R(p, n) for(long int j=p; j>=n; j--)
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define INF 121999999
using namespace std;
int main ()
{
    bool prime [32768];
    int length = (int) sqrt (32768);

    for ( int i = 0; i < 32768; i++ )
        prime [i] = true;

    FOR( 2,length+1, 1)
        for ( int j = i * 2; j < 32768; j += i )
            prime [j] = false;

    int count,n;
    while ( scanf ("%d", &n) && n ) {
            count=0;
            FOR(2, n/2+1, 1)
            {
                if(prime[i]&&prime[n-i])
                    count++;
            }
    cout<<count<<endl;
    }
    return 0;
}
