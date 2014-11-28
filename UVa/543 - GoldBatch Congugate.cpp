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
#define FOR(p, n) for(long int i=p; i<n; i++)
#define FOR_R(p, n) for(long int j=p; j>=n; j--)
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define INF 121999999
using namespace std;
int main ()
{
    bool prime [1000005];
    int length = (int) sqrt (1000005);

    for ( int i = 0; i < 1000005; i++ )
        prime [i] = true;

    FOR( 2,length+1)
        for ( int j = i * 2; j < 1000005; j += i )
            prime [j] = false;

    int n;

    while ( scanf ("%d", &n) && n ) {

        bool flag = true;

        int i = 3;

        while ( i <= n - i && flag ) {
            if ( prime [n - i] && prime [i]) {
                printf ("%d = %d + %d\n", n, i, n - i);
                flag = false;
            }
            i += 2;
        }
    }
    return 0;
}
