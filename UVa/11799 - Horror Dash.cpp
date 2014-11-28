#include<iostream>
using namespace std;
int main()
{
    int test,caseno=1,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int a[n],max,i;
        for(i=0;i<n;i++)
            cin>>a[i];
        max=a[0];
        for(int i=1;i<n;i++)
            if(max<a[i])
                max=a[i];
        cout<<"Case "<<caseno++<<": "<<max<<endl;
    }
    return 0;
}
