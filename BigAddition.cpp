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
    vector<int> a, b,c;
    char value1, value2;
    while(sf("%c",&value1)){
        if(value1== '\n'){
           break;
        }
        a.push_back(value1-'0');
    }
    while(sf("%c",&value2)){
        if(value2=='\n'){
                break;
        }
        b.push_back(value2-'0');
    }
    vector<int>::reverse_iterator rit1,rit2 ;
    int carry=0, v1, v2, c1=0, c2=0;
    rit2=b.rbegin();
    c1 =a.size()>b.size() ? a.size() : b.size();
    for(rit1=a.rbegin(); c2<c1; rit1++)
        {
            if(c2>=a.size())
                v1=0;
            else
                v1=*rit1;
            if(c2>=b.size())
                v2=0;
            else
                v2=*rit2;
            if((v1+v2+carry)>=10){
                c.push_back((v1+v2+carry)%10);
                carry=1;
            }
            else{
                c.push_back(v1+v2+carry);
                carry=0;
            }
         rit2++;
         c2++;
        }
    if(carry>0)
        c.push_back(1);
    for(rit1=c.rbegin(); rit1!=c.rend(); rit1++)
        pf("%d",*rit1);
    return 0;
}
