#include<iostream>
using namespace std;
int main()
{
    long long int test,num;
    cin>>test;
    while(test--)
    {
        cin>>num;
        int a[num-2],j=0,i,t,temp,m=2,count;
        cout<<num<<" = ";
        for(i=m;i<=num;i++)
        {
            if(num%i==0)
            {
                a[j]=i;
                num/=i;
                i=1;
                j++;
            }
        }
        long long int c=0;
        temp=j;
        for(i=0;i<temp;i++)
        {
            t=i;
            count=0;
            for(j=t;j<temp;j++)
            {
                if(a[t]==a[j])
                    count++;
            }
            if(count>0)
                i=t+count-1;
            if(count>1&&c==0){
            cout<<a[t]<<'^'<<count;
            c++;
            }
            else if(c>1&&count>1){
                cout<<" * "<<a[t]<<'^'<<count;
                c++;
            }
            else if(c>0&&count>1){
                cout<<" * "<<a[t]<<'^'<<count;
                c++;
            }
            else if(c>0&&count==1){
                cout<<" * "<<a[t];
                c++;
            }
            else if(c==0&&count<=1){
                cout<<a[t];
                c++;
            }
        }
        if(test>0)
        cout<<endl;
    }
    return 0;
}
//algorithm error for large integer...
