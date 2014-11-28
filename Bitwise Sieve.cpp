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
#define MAX 10000007
using namespace std;
bool checkBit(int N,int pos){return (bool)(N & (1<<pos));}
int setBit(int N,int pos){	return N=N | (1<<pos);}
int main()
{
    int N;
    cin>>N;
    int status[(MAX/32)+2];
	 int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( checkBit(status[i>>5], i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += (i<<1) )
			 {
				 status[j>>5]=setBit(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }

	 puts("2");
	 for(i=3;i<=N;i+=2)
		 if( checkBit(status[i>>5],i&31)==0)
	 	 printf("%d\n",i);
    return 0;
}
