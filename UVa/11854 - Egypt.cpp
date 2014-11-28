#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if((a&&b&&c)==0) break;
        if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==b*b+a*a))
        {
            cout<<"right\n";
        }
        else cout<<"wrong\n";
    }
    return 0;
}
