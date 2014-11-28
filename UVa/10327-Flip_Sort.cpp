#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    while(cin>>n)
    {
        int a[n],count=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(a[i]>a[j])
                    count++;
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
    return 0;
}
