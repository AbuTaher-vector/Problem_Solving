#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define string ss
int main()
{
     ll tt;
     cin>>tt;
     while(tt--)
     {
         ll x,sum=0,cnt=0;
         cin>>x;
         ll arr[x+1];
         for(int i=0;i<x;i++)
         {
             cin>>arr[i];
             sum+=arr[i];
             if(arr[i]==0) cnt++;

         }
        if(cnt==0 && sum==0) cout<<1<<endl;
        else if(cnt!=0 && sum==0) cout<<cnt<<endl;
        else if(cnt==0 && sum!=0) cout<<0<<endl;
        else if(cnt!=0 && sum!=0 )
        {
            if(sum<0 && cnt==abs(sum)) cout<<++cnt<<endl;
            else cout<<cnt<<endl;
        }

     }

}