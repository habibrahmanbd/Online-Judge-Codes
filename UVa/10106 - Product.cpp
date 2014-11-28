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
#define sf scanf
#define pf printf
using namespace std;
vector<int> reverse_vector(vector<int> l)
{
    vector<int> temp;
    vector<int>::reverse_iterator r;
        for(r=l.rbegin();r!=l.rend();r++)
            temp.push_back(*r);
            return temp;
}
vector<int> add_vector(vector<int> p, vector<int>q)
{
    vector<int>c;
    vector<int>::reverse_iterator ritp,ritq ;
    int carry=0, v1, v2, c1=0, c2=0;
    ritq=q.rbegin();
    c1 =p.size()>q.size() ? p.size() : q.size();
    for(ritp=p.rbegin(); c2<c1; ritp++)
        {
            if(c2>=p.size())
                v1=0;
            else
                v1=*ritp;
            if(c2>=q.size())
                v2=0;
            else
                v2=*ritq;
            if((v1+v2+carry)>=10){
                c.push_back((v1+v2+carry)%10);
                carry=1;
            }
            else{
                c.push_back(v1+v2+carry);
                carry=0;
            }
         ritq++;
         c2++;
        }
    if(carry>0)
        c.push_back(1);
        return c;
}
int main()
{
    char temp = getchar();
    while(temp!='\0'){
        vector<int>a,b;
        char value1,value2;
            a.push_back(temp-'0');
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
    vector<int>f ;
    f.push_back(0);
    int count=0;
    for(rit2=b.rbegin(); rit2!=b.rend(); rit2++)
    {
        vector<int>c;
        int carry=0;
        for(rit1=a.rbegin(); rit1!=a.rend(); rit1++)
        {
            int p,q, r;
            p =*rit1;
            q=*rit2;
            c.push_back( ((p*q)+carry)%10);
            carry = ((p*q)+carry)/10;
        }
        if(carry>0)
            c.push_back(carry);
        c=reverse_vector(c);
        if(count>0){
        for(int i=1;i<=count;i++)
            c.push_back(0);
        }
        c=add_vector(f,c);
        f=reverse_vector(c);
        count++;
    }
    count=0;
    vector<int>::reverse_iterator cit;
    for(cit=f.rbegin();  ;cit++)
    {
        if(*cit == 0)
            count++;
        else
            break;
    }
    f.erase(f.end()-count ,f.end());
    if(f[0]==NULL)
        pf("0\n");
    else{
    vector<int>::iterator it;
    for(it=f.begin(); it!=f.end();it++)
        cout<<*it;
        pf("\n");
    }
    temp = getchar();
}
        return 0;
}
