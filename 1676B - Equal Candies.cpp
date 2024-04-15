#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,temp,sum=0,arr[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<(n-1);i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=(arr[i]-arr[0]);
        }
        cout<<sum<<endl;
    }
}