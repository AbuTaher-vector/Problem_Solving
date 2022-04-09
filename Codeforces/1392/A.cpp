#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,i,count=0;
        cin>>x;
        int arr[x+1];
        for(i=0;i<x;i++) cin>>arr[i];
        sort(arr,arr+x);
        for(i=0;i<x;i++)
        {
            if(arr[i]==arr[i+1]) count++;
        }
        if(count==x-1) cout<<x<<endl;
        else cout<<"1"<<endl;
    }
}
