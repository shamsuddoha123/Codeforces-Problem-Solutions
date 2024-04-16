#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,count,start;
	cin>>t;
    while(t--)
	{
    	count=0;
    	cin>>n;
    	for(i=1;i<=9;i++)
    	{
    		start=i;
    		while(start<=n)
    		{
    			count++;
    			start=start*10+i;
			}
		}
		cout<<count<<endl;
    }
}