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
#define INF 100007
using namespace std;
int main()
{
    long int x;
    while(cin>>x&&x>=12){
        bool prime[x+1];
      FOR(1,x+1, 1)
        prime[i]=true;
    for(int i=2; i*i<=x; i++)
        for(int j=i*2; j<=x; j+=i)
            prime[j]=false;

        bool flag=true;
        long int i=4;
        while ( i <= x - i && flag ) {
            if ( !prime [x - i] && !prime [i]) {
               cout<<i<<" "<<x-i<<endl;
                flag = false;
            }
            i += 2;
        }
    }
    return 0;
}
