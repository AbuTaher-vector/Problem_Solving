#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long  x,y,i;
        cin>>x>>y;
        long long arr[x+1],max=-1000000000,pro=-1000000000;
        for(i=0;i<x;i++)
        {
            cin>>arr[i];
           if(max<arr[i]) max=arr[i];
        }
        if(y%2!=0)
        {
            for(i=0;i<x;i++)
        {
             cout<<max-arr[i]<<" ";
        }
        cout<<endl;
        }
        else{
            for(i=0;i<x;i++)
            {
                 arr[i]=max-arr[i];
                if(pro<arr[i]) pro=arr[i];
            }
          for(i=0;i<x;i++)
        {
             cout<<pro-arr[i]<<" ";
        }
        cout<<endl;

        }


    }
}
