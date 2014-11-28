#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int test,count,w;
    cin>>test;
    while(test--)
    {
        cin>>w;
        count=(sqrt(8*w+1)-1)/2;
        cout<<count<<"\n";
    }
    return 0;
}
