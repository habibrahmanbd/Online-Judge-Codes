#include <iostream>
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
#define sf scanf
#define pf printf
using namespace std;
int main() {

	long sum, n,d,t,ans;
	//freopen("a.txt","r",stdin);
	while(cin>>n>>d)
	{
	    sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>t;
	        sum+=t;
	    }
	    if(sum+10*(n-1)>d)
            cout<<-1<<endl;
	    else if(sum+10*(n-1)<=d)
	    {
	        //cout<<"ok"<<endl;
	        ans=2*(n-1);
	        sum=d-sum-10*(n-1);
	        ans+=sum/5;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
