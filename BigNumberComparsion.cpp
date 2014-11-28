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
void print(vector<int> a)
{
    vector<int> ::iterator it;
    for(it=a.begin(); it!=a.end();it++)
        cout<<*it;
    cout<<endl;
}
int main()
{
    vector<int>a,b;
    char value1,value2;
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
    if(a.size()>b.size())
    {
        int p=a.size()-b.size();
        b=reverse_vector(b);
        for(int i=0; i<p;i++)
            b.push_back(0);
        b=reverse_vector(b);
    }
    if(b.size()>a.size())
    {
        int p=b.size()-a.size();
        a=reverse_vector(a);
        for(int i=0; i<p; i++)
            a.push_back(0);
        a=reverse_vector(a);
    }
    if(a[0]>b[0])
        cout<<"a";
    else if(a[0]<b[0])
        cout<<"b";
    else{
        vector<int>:: iterator it1, it2;
        int count=0;
        for(it1=a.begin(), it2=b.begin();it1!=a.end();it1++, it2++)
        {
                if(*it1>*it2){
                        cout<<"a";
                        break;
                }
                else if(*it1<*it2){
                        cout<<"b";
                        break;
                }
                else
                    count++;
        }
        if(count==a.size())
            cout<<"equal";
    }
        return 0;
}
