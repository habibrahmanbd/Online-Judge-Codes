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
#define FOR(p, n) for(int i=p; i<n; i++)
#define MAX(p,q) p>q?p:q
#define MIN(p,q) p<q?p:q
#define INF 100007
using namespace std;
bool arr[INF] ;
void prime(long number)
{
    for(long int i=1; i<=number; i++)
        arr[i]=true;
    for(int i=2; i*i<=number; i++)
        for(int j=i*2; j<=number; j+=i)
            arr[j]=false;
    return ;
}
int main()
{
    long int n,c;
    while(cin>>n>>c)
    {
        prime(n);
        int count=0;
        FOR(1, n+1)
        if(arr[i])
            count++;
        if(!(count%2))
        {
            cout<<n<<" "<<c<<":";
            int p=count/2;
            int q_c=0;
            FOR(1, n+1)
            {
                if(arr[i]){
                    q_c++;
                if(q_c>=p-(c-1)&&q_c<=p+c)
                    cout<<" "<<i;
                }
            }
            cout<<endl;

        }
        else
        {
            cout<<n<<" "<<c<<":";
            long int p=(count+1)/2;
            long int q_c=0;
            FOR(1, n+1)
            {
                if(arr[i]){
                    q_c++;
                if(q_c>=p-(c-1)&&q_c<=p+(c-1))
                    cout<<" "<<i;
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
