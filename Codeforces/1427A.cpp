#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
int main()
{
    nn tt;
    cin>>tt;
    while(tt--)
    {
        nn x,sum=0,flag=0;
        cin>>x;
        int arr[x+1];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==0) cout<<"NO"<<endl;
        else if(sum>0)
        {
            sort(arr,arr+x);
            reverse(arr,arr+x);
            flag=1;
        }
        else
        {
            sort(arr,arr+x);
            flag=1;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<x;i++) cout<<arr[i]<<" ";
                cout<<endl;
                    }
    }



}