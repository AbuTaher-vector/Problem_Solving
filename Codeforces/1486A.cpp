#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn tt;
   cin>>tt;
   while(tt--)
   {
       nn t;
       cin>>t;
        ll arr[t+1];
        for(nn i=0;i<t;i++) cin>>arr[i];
        nn flag=1;
        for(nn i=0;i<t-1;i++)
        {
            if(arr[i]>i)
            {
                arr[i+1]+=arr[i]-i;
                arr[i]=i;

            }
            if(arr[i]>=arr[i+1])
            {
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

   }

}