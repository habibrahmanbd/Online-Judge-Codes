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
    int t,n;
    sf("%d\n",&t);
    for(int tcase=1 ; tcase<=t; tcase++)
    {
        sf("%d\n",&n);
        char c[n],temp,p[n];
        for(long i=0;i<n;i++)
            sf("%c%c%c\n",&c[i],&temp,&p[i]);
        char str[1000001];
        sf("%s",&str);
        getchar();
        long len=strlen(str);
        int flag[len];
        for(long i=0;i<len;i++)
            flag[i]=0;
        for(long i=0;i<n;i++)
        {
            for(long j=0;j<len;j++){
                if(c[i]==str[j]){
                    if(flag[j]==0){
                    str[j]=p[i];
                    flag[j]=1;
                    }
                }
            }
        }
        len--;
        bool chk=true;
        int count=0;
        for(long k=0;k<=len;k++)
            if(str[k]=='.')
                count++;
        while(count){
        if(str[len]!='0'){
            if(str[len]=='.')
                    len--;
                    break;
                }
                else
                    len--;
        }
        for(long i=0;i<=len;i++)
        {

            if(str[i]=='0'&&chk==true)
                continue;

            else{
                pf("%c",str[i]);
            chk=false;
            }
        }
        if(chk==true)
        pf("0\n");
        else
            pf("\n");
    }
    return 0;
}
