#include<iostream>
using namespace std;
int main()
{
    int soda,count,test,e,f,c,empty;
    cin>>test;
    while(test--){
    cin>>e>>f>>c;
    empty=e+f;
    soda=empty/c;
    count=soda;
    empty=soda+(empty%c);
    while(empty>=c)
    {
        soda=empty/c;
        count+=empty/c;
        empty=soda+(empty%c);
    }
    cout<<count<<"\n";
    }
    return 0;
}
