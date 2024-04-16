#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int ans=1,maximum=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(n-1);i++)
    {
        if(arr[i+1]>arr[i])
        {
            ans++;
        }
        else
        {
            ans=1;
        }
        maximum=max(maximum,ans);
    }
    cout<<maximum<<endl;
    return 0;
}