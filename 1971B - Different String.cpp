#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,i,count,flag;
    string s;
    cin>>t;
    while(t--)
    {
        count=0;
        flag=0;
        cin>>s;
        for(i=1;i<s.size();i++)
        {
            if(s[i-1]!=s[i])
            {
                count=1;
                flag=i;
                break;
            }
        }
        if(count==0||s.size()==1)
        {
            cout<<"NO"<<endl;
        }
        else if(count==1)
        {
            cout<<"YES"<<endl;
            cout<<s[flag]<<s[flag-1];
            for(i=0;i<s.size();i++)
            {
                if(i==flag||i==flag-1)
                {
                    continue;
                }
                else{
                    cout<<s[i];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}