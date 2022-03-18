#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn n,x;
    cin>>n;
    nn arr[n+1];
    map<nn,nn>mp;
    for(nn i=0;i<n;i++)
    {
       cin>>x;
       mp[x]++;
    }
    nn mx=INT_MIN;
    for(nn i=2;i<=100;i++)
    {
        nn sum=0;
        for(auto a:mp)
        {
            nn k=i-a.first;
            if(k>=1 && mp.count(k))
            {
               sum+=min(a.second,mp[k]);
            }

        }
        sum/=2;
        mx=max(mx,sum);
    }
    cout<<mx<<nl;
  
 
 
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
   
}