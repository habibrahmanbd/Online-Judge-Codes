#include<iostream>
using namespace std;
int main()
{
    int test,caseno=1,high,low,n,i;
    cin>>test;
    while(test--)
    {
        high=0; low=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int j=0;
        for(i=1;i<n;i++)
        {
            if(a[j]<a[i])
                high++;
            if(a[j]>a[i])
                low++;
            j++;
        }
        cout<<"Case "<<caseno++<<": "<<high<<' '<<low<<endl;
    }
    return 0;
}
