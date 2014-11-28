#include<iostream>
using namespace std;
int main()
{
    int test,bd,www,tie,ab,i,n,caseno=1;
    cin>>test;
    while(test--)
    {
        bd=0;www=0;tie=0;ab=0;
        cin>>n;
        char ch[n];
        int i=0;
        while(i<n)
        {
            cin>>ch[i];
            if(ch[i]=='B') bd++;
            else if(ch[i]=='W') www++;
            else if(ch[i]=='T') tie++;
            else if(ch[i]=='A') ab++;
            i++;
        }
        if(ab==n)
            cout<<"Case "<<caseno++<<": "<<"ABANDONED\n";
        else if(bd==www)
            cout<<"Case "<<caseno++<<": "<<"DRAW "<<bd<<' '<<tie<<endl;
        else if(bd==n-ab&&bd>www)
            cout<<"Case "<<caseno++<<": "<<"BANGLAWASH"<<endl;
        else if(www==n-ab&&www>bd)
            cout<<"Case "<<caseno++<<": "<<"WHITEWASH"<<endl;
        else if(bd>www)
            cout<<"Case "<<caseno++<<": "<<"BANGLADESH "<<bd<<" - "<<www<<endl;
        else if(www>bd)
            cout<<"Case "<<caseno++<<": "<<"WWW "<<www<<" - "<<bd<<endl;

    }
    return 0;
}
