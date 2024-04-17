#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,maximum,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        maximum=0;
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                count++;
                maximum=max(maximum,count);
            }
            else
            {
                count=0;
            }
        }
        cout<<maximum<<endl;
    }
    return 0;
}