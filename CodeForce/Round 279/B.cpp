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
#define IL ({ int64 a; scanf("%I64d",&a);  a;})  //Long Integer Input
#define ID ({ db a; scanf("%lf",&a);  a;}) //Double input
#define IC ({ char a; scanf("%c",&a);  a;}) //Character Input
#define IS ({ string a; cin >> a;  a;}) //String input
#define ICA(n) ({ char a[n]; scanf("%s",&a);  a;}) //Char-Array Input
#define OC(cs) printf("Case %d:",cs);  //Case Input
//Loops.....
#define FOR(p, n, m) for(long int i=p; i<=n; i+=m)  //For Loop increment
#define FOR_R(p, n, m) for(long int j=p; j>=n; j-=m)  //For loop decrement
//Problem wise define.....
vector<bool> Map(1000010);
vector<int64> Level(1000010,0);
vector<int64> Child(1000010,-1);
vector<int> List;
void update(int64 i,int64 d)
{
    Level[i]=d+2;
    if((Child[i])==-1) return;
    update(Child[i],d+2);
}
int main()
{
    int64 n=IL;
    int64 a,b;
    for(int i=0;i<n;i++)
    {
        a=IL;
        b=IL;
        if(a&&(Map[a]==false))
            {List.push_back(a);Map[a]=true;}
        if(b&&(Map[b]==false))
            {List.push_back(b);Map[b]=true;}
        if(a==0)
            {
                Level[b]=1;
                if(Child[b]!=-1)
                    update(Child[b],1);
            }
            else if(b==0)
            {
            }
        else
        {
            Child[a]=b;
           update(Child[a],Level[a]);
        }
    }
    int z=List.size();
    vector<pair<int64,int64> > A;
    for(int i=0;i<z;i++)
    {
        int m=List[i];
        A.push_back(make_pair(Level[m],m));
    }
    sort(A.begin(),A.end());
    for(int i=0;i<z;i++)
        cout<<A[i].second<<" ";
    cout<<endl;
    return 0;
}
