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
    int t;
    cin>>t;
    int n,c=0;
    while(t--)
    {
        cin>>n;
        char r;
        int count=0;
        int fail_match=0;
        while(n--)
        {
            cin>>r;
            if(r=='W'){
                if(fail_match<3){
                fail_match=0;
                count++;
                }
            }
            else if(r=='L'){
                if(fail_match<3){
                fail_match++;
                count++;
                }
            }
            else if(r=='D'){
                if(fail_match<3){
                fail_match++;
                count++;
                }
            }
        }
        ++c;
        if(fail_match<3)
        cout<<"Case "<<c<<": Yay! Mighty Rafa persists!\n";
        else
        cout<<"Case "<<c<<": "<<count<<endl;
    }
    return 0;
}
