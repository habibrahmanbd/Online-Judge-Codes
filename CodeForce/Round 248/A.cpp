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
int main()
{
	int v,n,x=0,y=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>v;
		if(v==200)x++;
		else y++;
	}
	if(x%2)y-=2;
	if(y>=0 && y%2==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
