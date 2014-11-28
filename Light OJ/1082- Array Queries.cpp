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
#define PF printf
#define SF scanf
#define input freopen ("input.txt", "r", stdin);
#define output freopen ("output.txt", "w", stdout);
#define co cout
#define ci cin
#define II ({ int a; scanf("%d",&a); a;}) //Integer Input
#define IL ({ int64 a; scanf("%lld",&a);  a;})  //Long Integer Input
#define ID ({ db a; scanf("%lf",&a);  a;}) //Double input
#define IC ({ char a; scanf("%c",&a);  a;}) //Character Input
#define IS ({ string a; cin >> a;  a;}) //String input
#define ICA(n) ({ char a[n]; scanf("%s",&a);  a;}) //Char-Array Input
#define OC(cs) printf("Case %d:\n",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
#define mx 1000000
int64 arr[mx];
int64 tree[mx*3];
void init(int64 node, int64 b,int64 e)
{
    if(b==e){
        tree[node] = arr[b];
        return;
    }
    int64 left = node*2;
    int64 right = (2*node)+1;
    int64 mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node]=MIN(tree[left],tree[right]);  // Every Node Containing the minimum values of their child
}
int64 query(int64 node, int64 b, int64 e, int64 i, int64 j)
{

    if(i>e||j<b) return INF;
    else if(b>=i&&e<=j) return tree[node];
    int64 left = node*2;
    int64 right = (2*node)+1;
    int64 mid = (b+e)/2;
    int64 p1 = query(left, b, mid, i, j);
    int64 p2 = query(right, mid+1, e, i, j);
    return MIN(p1,p2);
}
int main()
{

   input;
    int t=II;
    int cs=1;
    while(t--){
    int64 n=IL,q=IL;
    FOR(1,n,1)
    arr[i]=IL;
    init(1,1,n);
    OC(cs++);
//    PF("\n");
    while(q--){
    int64 i=IL, j=IL;
    int64 q_res = query(1,1,n, i,j);  //Query for the minimum value in the array
    PF("%ld\n",q_res);
    }
    }
    return 0;
}
