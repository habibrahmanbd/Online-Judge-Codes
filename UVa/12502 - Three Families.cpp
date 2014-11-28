#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test,paid,x,y,z,blance,e1,e2;
    float avr;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>blance;
        z=(x+y)/3;
        e1=x-z;
        e2=y-z;
        if(e2==0) cout<<blance<<"\n";
        else {
                paid=blance*((2*x)-y)/(x+y);
        cout<<paid<<"\n";
        }
    }
    return 0;
}
