#include<iostream>
using namespace std;
int main()
{
    int cola,empty,count;
    while((cin>>cola)){
    count=cola;
    empty=cola;
    while(empty>1)
    {
        cola=empty/3;
        count+=empty/3;
        empty=cola+(empty%3);
        if(empty==2)
        {
            count+=1;
            empty=0;
        }
    }
    cout<<count<<"\n";
    }
    return 0;
}
