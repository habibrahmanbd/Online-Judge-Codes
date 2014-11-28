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
#define IL ({ int64 a; scanf("\n%lld\n",&a);  a;})  //Long Integer Input
#define ID ({ db a; scanf("%lf",&a);  a;}) //Double input
#define IC ({ char a; scanf("%c",&a);  a;}) //Character Input
#define IS ({ string a; cin >> a;  a;}) //String input
#define ICA(n) ({ char a[n]; scanf("%s",&a);  a;}) //Char-Array Input
#define OC(cs) printf("Case %d:",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
#define mx 100005
int64 arr[mx];
int64 tree[mx*4];
vector<int64>f[mx];
void init(int64 node, int64 b,int64 e)
{
    if(b==e){
        tree[node] = arr[b];
        return;
    }
    int64 left = node<<1;
    int64 right = (node<<1)+1;
    int64 mid = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node]=tree[left]+tree[right];
}
int64 query(int64 node, int64 b, int64 e, int64 i, int64 j)
{
    if(i>e||j<b) return 0;
    else if(b>=i&&e<=j) return tree[node];
    int64 left = node<<1;
    int64 right = (node<<1)+1;
    int64 mid = (b+e)>>1;
    int64 p1 = query(left, b, mid, i, j);
    int64 p2 = query(right, mid+1, e, i, j);
    return p1+p2;
}
void update(int64 node, int64  b, int64 e, int64 i, int64 newvalue)
{
    if(i>e||i<b) return ;
    else if(b>=i&&e<=i) {
        tree[node] = newvalue;
        return;
    }
    int64 left = node<<1;
    int64 right = (node<<1)+1;
    int64 mid = (b+e)>>1;
    update(left, b, mid, i, newvalue);
    update(right, mid+1, e, i, newvalue);
    tree[node]  = tree[left] + tree[right];
}
int main()
{
    input;
    int64 n=IL;
    FOR(1,n,1)
    arr[i]=IL;
    FOR(1,n,1)
    {
        int64 a=IL,b=IL;
        f[i].pb(a);
        f[i].pb(b);
    }
    init(1,1,n);
    int64 Q=IL;
    while(Q--)
    {
        int64 t=IL, p=IL, data=IL;
        if(t==1)
            update(1,1,n,p,data);
        else if(t==2)
        {
            int64 q_res=0;
            FOR(p,data,1)
                q_res+=query(1,1,n,f[i][0],f[i][1]);
            pf("%ld\n",q_res);
        }
    }
    return 0;
}
