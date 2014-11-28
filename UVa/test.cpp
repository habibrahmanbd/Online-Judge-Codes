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
    int x=123044, y=123025;
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<x<<" "<<y<<endl;

}
