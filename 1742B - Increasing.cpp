#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,temp,flag=0,arr[1000];
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
        for(i=0;i<n;i++)
        {
            if(arr[i+1]-arr[i]==0)
            {
                flag=0;
                break;
            }
            else if(arr[i+1]-arr[i]>0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}