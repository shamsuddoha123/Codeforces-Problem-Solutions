#include<iostream>
using namespace std;
int main()
{
    int t,n,i,sumEven,sumOdd,arr[1000];
    cin>>t;
    while(t--)
    {
        sumEven=sumOdd=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                sumEven+=arr[i];
            }
            else
            {
                sumOdd+=arr[i];
            }
        }
        if(sumEven>sumOdd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}