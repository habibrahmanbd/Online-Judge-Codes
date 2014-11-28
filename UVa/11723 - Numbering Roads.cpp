#include<iostream>
using namespace std;
int main()
{
    int r,n,sum,i,count,caseno=1;
    while(cin>>r>>n)
    {
        count=0;
        if(r==0&&n==0)
            break;
        sum=n;
        if(sum>=r) cout<<"Case "<<caseno++<<": "<<count<<"\n";
        else{
        for(i=1;i<=26;i++)
        {
            sum+=n;
            count++;
            if(sum>=r)
                break;
        }
        if(sum<r)
            cout<<"Case "<<caseno++<<": impossible\n";
        else
            cout<<"Case "<<caseno++<<": "<<count<<"\n";
        }
    }
    return 0;
}
