#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n1,n2,n3,n4,n5,n6,n7,n8;
    cin>>t;
    while(t--)
    {
        int arr[3];
        cin>>n1>>n2;
        cin>>n3>>n4;
        cin>>n5>>n6;
        cin>>n7>>n8;
        arr[0]=sqrt(((n1-n3)*(n1-n3))+((n2-n4)*(n2-n4)));
        arr[1]=sqrt(((n3-n5)*(n3-n5))+((n4-n6)*(n4-n6)));
        arr[2]=sqrt(((n5-n7)*(n5-n7))+((n6-n8)*(n6-n8)));
        for(int i=0;i<2;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<arr[0]*arr[0]<<endl;
    }
    return 0;
}