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
#define OC(cs) printf("Case %ld:\n",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....

/// Can't solve it yet.....
#define mx 1000000
int64 arr[mx];
int64 tree[mx*3];
void init(int64 node, int64 b, int64 e)
{
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int64 left = node<<1;
    int64 right = (node<<1)  +1;
    int64 mid  = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = (tree[left]|tree[right]);
}
void update(int64 node, int64 b, int64 e, int64 i, int64 j, int64 x)
{
    if(i>e||j<b) return;
    if(b>=i && e<=j)
    {
        tree[node] = !(tree[node]&x);
        return;
    }
    int64 left = (node<<1);
    int64 right = (node<<1) + 1;
    int64 mid = (b+e)>>1;
    update(left, b, mid, i ,j, x);
    update(right, mid+1, e, i, j, x);
    tree[node] = (((tree[left] &tree[right]))&x);
}
int64 query(int64 node, int64 b, int64 e, int64 i)
{

    if(i>e||i<b) return 0;
    if(b>=i&&e<=i) return tree[node];
    int64 left = node<<1;
    int64 right = (node<<1) + 1;
    int64 mid = (b+e)>>1;
    int64 p1= query(left, b, mid, i);
    int64 p2= query(right, mid+1, e, i);
    return p1|p2;
}
int main()
{
    input;
    int64 t=IL,i=1,count,cs=1;
    //co<<t<<endl;
    //
    while(t--){
    sf("\n");
    count=0,i=1;
    char temp;
    while(scanf("%c",&temp)){
        if(temp=='\n')
        break;
        else
            arr[i++] = temp - '0';
        count++;
    }
    init(1,1,count);
    int64 q;
    ci>>q;
    OC(cs++);
    while(q--){
    char C;
    ci>>C;
    //co<<" Char "<<C<<endl;
    if(C=='I'){
            int64 p,q;
            ci>>p>>q;
            update(1,1,count, p,q, 1);
    }
    else
    {
        int64 p=IL;
        pf("%ld\n",query(1,1,count, p));
    }
    }
    }
    return 0;
}
