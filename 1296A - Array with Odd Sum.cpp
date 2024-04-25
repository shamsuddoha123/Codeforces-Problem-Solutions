#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum,odd,even;
    cin>>t;
    while(t--)
    {
        sum=0;
        odd=0;
        even=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0 || arr[i]==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum+=arr[i];
        }
        if(sum%2!=0 || sum==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(even!=0 && odd!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}