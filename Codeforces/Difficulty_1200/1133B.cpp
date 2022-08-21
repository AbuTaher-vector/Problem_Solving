#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
} 
int main()
{
       setup();
       
       int n,k;
       cin>>n>>k;
       vector<int>m(105);
       int x;
       for(int i=0;i<n;i++)
       {
          cin>>x;
          m[x%k]++;
       }
       int ans=0;
       for(int i=0;i<k;i++)
       {
           if(i!=(k-i)%k) ans+=min(m[i],m[k-i]);
           else ans+=(m[i]/2)*2;
       }
       cout<<ans<<'\n';
}