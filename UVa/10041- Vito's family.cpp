#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int test,i,j,r;
    cin>>test;
    while(test--)
    {
        cin>>r;
        int a[r],sum=0,temp;
        for(i=0;i<r;i++)
            cin>>a[i];
        for(i=0;i<r-1;i++)
            for(j=i+1;j<r;j++)
                if(a[j]<a[i])
                 {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
                 }
        for(i=0;i<r;i++)
        sum+=abs(a[r/2]-a[i]);
        cout<<sum<<endl;
    }
    return 0;
}
