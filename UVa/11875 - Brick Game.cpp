#include<iostream>
using namespace std;
int main()
{
    int test,n,caseno=1;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int i,a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Case "<<caseno++<<": "<<a[((n-1)/2)]<<"\n";
    }
    return 0;

}
