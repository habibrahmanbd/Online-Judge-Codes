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
inline int cal(int sum)
{
    int rem,sum1=0;
    while(sum>0)
    {
            rem=sum%10;
            sum1+=rem;
            sum/=10;
    }
    if(sum1<10)
        return sum1;
    else
     return cal(sum1);
}
inline int charcal(int len, char *str)
{
    int i=0,sum=0,a;
    for(i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z')
            sum+=str[i]-'A'+1;
        else if(str[i]>='a' && str[i]<='z')
            sum+=str[i]-'a'+1;
    }
    return (cal(sum));
}
int main()
{
    float a1,a2, result;
    char str1[26],str2[26];
    while(gets(str1)&&gets(str2))
    {
        int temp;
        a1=charcal(strlen(str1),str1);
        a2=charcal(strlen(str2),str2);
        if(a1>a2)
        {
            temp=a1;
            a1=a2;
            a2=temp;
            result=(float)((float)a1/(float)a2)*100.00;
        }
        else
        result=(float)((float)a1/(float)a2)*100.00;
     pf("%0.2f %c\n",result,'%');
     }
    return 0;
}

