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
static bool odd=false, even=true; // black == false and red == true
bool color(int64 a)
{
    if(a%2)
        return odd;
    else
        return even;
}
int64 level(int64 a)
{
    return (int64)ceil(log2(a+1));
}
int64 same_level(int64 a, int64 b, int64 count,bool checker)
{
    while(!(a==b))
    {
        if(color(level(a))==checker)
        count+=2;
            a/=2;
            b/=2;
    }
    if(color(level(a))==checker)
        count++;
    return count;
}
int main()
{
    //input;
    int64 Q=IL;
    while(Q--)
    {

        char c,temp;
        sf("\n%c%c",&temp,&c);
        if(c=='i')
        {
            if(even==true){
                odd=true;
                even=false;
            }
            else if(even==false)
            {
                odd=false;
                even=true;
            }
        }
        else
        {
            int64 x=IL,y=IL;
            if(c=='b')
            {
                if(level(x)==level(y))
                    pf("%ld\n",same_level(x,y,0,false));
                else if(level(x)<level(y))
                {
                    int count=0;
                    while(level(x)<level(y))
                    {
                        if(color(level(y))==false)
                            count++;
                        y/=2;
                    }
                    pf("%ld\n",same_level(x,y,count,false));
                }
                else
                {
                    int count=0;
                    while(level(y)<level(x))
                    {
                        if(color(level(x))==false)
                            count++;
                        x/=2;
                    }
                    pf("%ld\n",same_level(x,y,count,false));
                }
            }
            else
            {
                if(level(x)==level(y))
                    pf("%ld\n",same_level(x,y,0,true));
                else if(level(x)<level(y))
                {
                    int count=0;
                    while(level(x)<level(y))
                    {
                        if(color(level(y))==true)
                            count++;
                        y/=2;
                    }
                    pf("%ld\n",same_level(x,y,count,true));
                }
                else
                {
                    int count=0;
                    while(level(y)<level(x))
                    {
                        if(color(level(x))==true)
                            count++;
                        x/=2;
                    }
                    pf("%ld\n",same_level(x,y,count,true));
                }
            }
        }
    }
    return 0;
}
