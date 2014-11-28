/*******************************
*   Bismillah hir Rohmanir Rahim *
*   Habibur Rahman Habib        *
*   Dept. of CSE, RUET          *
*   habib_cse_ruet@yahoo.com  *
********************************/

using namespace std;
//C headers
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>
#include <cctype>
#include <cassert>
#include <ctime>
//C++ headers
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
//type def
#define PI 2*acos (0.0)
typedef long long int64;
typedef unsigned long long int64u;
#define db double
#define pb push_back
#define pii pair<int ,int >
#define NL puts("")
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define MOD 100000007
#define INF 1<<29
//Intput_Output
#define input freopen ("input.txt", "r", stdin);
#define output freopen ("output.txt", "w", stdout);
#define pf printf
#define sf scanf
#define co cout
#define ci cin
#define II ({ int a; scanf("%d",&a); a;}) //Integer Input
#define IL ({ int64 a; scanf("%lld",&a);  a;})  //Long Integer Input
#define ID ({ db a; scanf("%lf",&a);  a;}) //Double input
#define IC ({ char a; scanf("%c",&a);  a;}) //Character Input
#define IS ({ string a; cin >> a;  a;}) //String input
#define ICA(n) ({ char a[n]; scanf("%s",&a);  a;}) //Char-Array Input
#define OC(cs) printf("Case %d:",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
#define mx 1000000
int64 arr[mx];
struct info
{
    int64 prop, sum;
}tree[mx*3];

void init(int64 node, int64 b,int64 e)
{
    if(b==e){
        tree[node].sum = arr[b];
        //tree[node].prop=0;
        return;
    }
    int64 left = node<<1;
    int64 right = (node<<1) + 1;
    int64 mid = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum=tree[left].sum+tree[right].sum;
    //tree[node].prop = tree[left].prop + tree[right].prop;
}

void update(int64 node, int64 b, int64 e, int64 i, int64 j, int64 x)
{
    if(i>e||j<b) return;
    if(b>=i && e<=j)
    {
        tree[node].sum += (e-b+1)*x;
        tree[node].prop += x;
        return;
    }
    int64 left = (node<<1);
    int64 right = (node<<1) + 1;
    int64 mid = (b+e)>>1;
    update(left, b, mid, i ,j, x);
    update(right, mid+1, e, i, j, x);
    tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
}
int64 query(int64 node, int64 b, int64 e, int64 i, int64 j, int64 carry)
{
    if(i>e || j<b) return 0;
    if(b>=i && e<=j ) return tree[node].sum + carry*(e-b+1);

    int64 left  = node<<1;
    int64 right = (node<<1) +1;
    int64 mid = (b+e)>>1;
    int64 p1 = query(left, b,e, i,j, carry+tree[node].prop);
    int64 p2 = query(right, mid+1,e, i,j, carry+tree[node].prop);
    return p1+p2;
}
int main()
{
    int64 n=IL;
    FOR(1,n,1)
    arr[i]=IL;
    init(1,1,n);
    int64 i=IL, j= IL, x= IL;
    update(1,1, n, i, j, x);
    i=IL;
    j= IL;
    pf("%lld\n",query(1, 1,n, i,j,0));
    return 0;
}
