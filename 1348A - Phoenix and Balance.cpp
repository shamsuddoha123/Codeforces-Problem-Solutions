#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,ans,sum1,sum2,div,k,i,arr[10000];
    cin>>t;
    while(t--)
    {
        ans=sum1=sum2=div=k=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            arr[k++]=pow(2,i);
        }
        div=n/2;
        sum1=arr[n-1];
        for(i=0;i<=(div-2);i++)
        {
            sum1+=arr[i];
        }
        for(i=(div-1);i<(n-1);i++)
        {
            sum2+=arr[i];
        }
        ans=abs(sum1-sum2);
        cout<<ans<<endl;
    }
    return 0;
}